#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include"Selection_tablets.h"
#include <math.h>
using namespace std;
//class Belt {//������� 1.1
//	std::string Name;
//	double Width[2];//0-min 1-max
//	double Depth[2];//0-min 1-max
//	double Speed;
//	std::string transferred_loads;
//	std::string UTS;
//	double acceptable_short_overload;
//	std::string lifetime;
//	double Breaking_Point[2];// 0-min/��� ��������� 1-max/� ����������
//	double Uprugost_M[2];//0-���������� 1-�����
//	int Break_size_change;
//	double density[2];
//	double Diametr_dept_rel_rec[2];//0,0-1,0- ������������� 0,1-1,1 - �����������
//	double Diametr_dept_rel_Acc[2];
//public:
//	Belt(string Name, double Width[], double Depth[], double Speed, string transferred_loads, string UTS, double acceptable_short_overload, string lifetime, double Breaking_Point[], double Uprugost_M[], int Break_size_change, double density[], double Diametr_dept_rel_rec[], double Diametr_dept_rel_acc[]) {
//		this->Name = Name;
//		this->Width[0] = Width[0]; this->Width[1] = Width[1];
//		this->Depth[0] = Depth[0]; this->Depth[1] = Depth[1]; this->Speed = Speed;
//		this->transferred_loads=transferred_loads;
//		this->UTS = UTS;
//		this->acceptable_short_overload = acceptable_short_overload;
//		this->lifetime = lifetime; this->Breaking_Point[0] = Breaking_Point[0]; this->Breaking_Point[1] = Breaking_Point[1];
//		this->Uprugost_M[0] = Uprugost_M[0]; this->Uprugost_M[1] = Uprugost_M[1];
//		this->density[0] = density[0]; this->density[1] = density[1];
//		this->Diametr_dept_rel_rec[0] = Diametr_dept_rel_rec[0]; this->Diametr_dept_rel_rec[1] = Diametr_dept_rel_rec[1];
//		this->Diametr_dept_rel_Acc[0] = Diametr_dept_rel_Acc[0]; this->Diametr_dept_rel_Acc[1] = Diametr_dept_rel_Acc[1];
//	}
//};
#pragma region Classes
class Belt_light {//���������� ������ ������� 1.1. ��� ������� �������� ����� ��������
private:
	int type;
	double Speed;// �������� �����
	double Depth[2];// 0-min 1-max//������� �����
	double Diam_k_delts_r[2];
	double Diam_k_delts_d[2];
public:
	Belt_light(int type, double C_Speed, double C_Depth_1, double C_Depth_2, double C_DD1, double C_DD2, double C_D1, double C_D2) :type{ type }, Speed{ C_Speed }, Depth{ C_Depth_1,C_Depth_2 }, Diam_k_delts_r{ C_DD1,C_DD2 }, Diam_k_delts_d{ C_D1,C_D2 } {}
	bool Depth_check(double D1) {
		double D1_k_Depth_min = D1 / Depth[0];
		double D1_k_Depth_max = D1 / Depth[1];
		if (D1_k_Depth_min >= Diam_k_delts_r[0] && D1_k_Depth_min <= Diam_k_delts_r[1]) {
			return true;
		}
		else {
			if (D1_k_Depth_min >= Diam_k_delts_d[0] && D1_k_Depth_min <= Diam_k_delts_d[1]) {
				return true;
			}
			else {
				if (D1_k_Depth_max >= Diam_k_delts_r[0] && D1_k_Depth_max <= Diam_k_delts_r[1]) {
					return true;
				}
				else {
					if (D1_k_Depth_max >= Diam_k_delts_d[0] && D1_k_Depth_max <= Diam_k_delts_d[1]) {
						return true;
					}
					else { return false; }
				}
			}
		}

	}
	double Get_speed() { return Speed; }
	int get_type() { return type; }
};
class Acceptable_Diametr {//������� 13.18
	double Diametr;//������� �����
	double Accept_dev;//���������� ����������
	double Arrow;//������ ����������
	double Width;//������ �����
	double Max_dev;// ���������� ����������
	double Recomended_b_width;// ������������� ������ �����
public:
	Acceptable_Diametr(double Diametr, double Accept_dev, double Arrow, double Width, double Max_dev, double Recomended_b_width) {
		this->Diametr = Diametr; this->Accept_dev = Accept_dev; this->Arrow = Arrow; this->Width = Width; this->Max_dev = Max_dev; this->Recomended_b_width = Recomended_b_width;
	}
	Acceptable_Diametr() {};
	double Compare_Diametrs(double D) {
		double result = Diametr - D;
		if (result < 0)result *= -1;
		return result;
	}
	double Get_Diametr() { return Diametr; }


};
class Belt_width_syntetic {
	double Depth; double D_min;
	Belt_width_syntetic(double Depth, double D_min) { this->Depth = Depth; this->D_min = D_min; }
};
#pragma endregion
//Belt Tab_1_1[3]{
//	Belt{"�������� ������������ �������� �����(���� 38.05.98 76)",{20,500},{3,3.5},
//	30,"�����, �������, �������","�������",1.3,"�������",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40}},
//		Belt("�������� ������������ �������� �����(���� 38.05.98 76)",{20,500},{3,3.5},
//	30,"�����, �������, �������","�������",1.3,"�������",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40}),Belt("�������� ������������ �������� �����(���� 38.05.98 76)",{20,500},{3,3.5},
//	30,"�����, �������, �������","�������",1.3,"�������",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40})
//};
#pragma region Tables
Belt_light Belts_light[]{//��� ��������
	Belt_light(1,30,3,13.5,0,30,0,40),//������� �������������
	Belt_light(2,100,0.4,0.6,50,70,100,150),//������������� ����
	Belt_light(3,50,1,1.2,50,70,100,150)//������������� ��� 2
};

Acceptable_Diametr Accept_Diams[]{//13.18
	Acceptable_Diametr(63,0.8,0.3,25,1,20),
	Acceptable_Diametr(71,1,0.3,32,1,25),
	Acceptable_Diametr(80,1,0.3,40,1,32),
	Acceptable_Diametr(90,1.2,0.3,50,1,40),
	Acceptable_Diametr(100,1.2,0.3,63,1,50),
	Acceptable_Diametr(112,1.2,0.3,71,1,63),
	Acceptable_Diametr(125,1.6,0.4,80,1.5,71),
	Acceptable_Diametr(140,1.6,0.4,90,1.5,80),
	Acceptable_Diametr(160,2,0.5,100,1.5,90),
	Acceptable_Diametr(180,2,0.5,112,1.5,100),
	Acceptable_Diametr(200,2.5,0.5,125,1.5,112),
	Acceptable_Diametr(224,2.5,0.6,140,1.5,125),
	Acceptable_Diametr(250,2.5,0.8,160,2,140),
	Acceptable_Diametr(280,3.2,0.8,180,2,160),
	Acceptable_Diametr(315,3.2,1,200,2,180),
};
#pragma endregion
double Get_speed(int type) {
	for (int i = 0; i < 3; i++) {
		if (Belts_light[i].get_type() == type) {
			return Belts_light[i].Get_speed();
		}
	}
}
double Calculate_Diametr(int type, double n1) {
	double Speed;
	int i = 0;
	while (Speed == NULL) {
		if (Belts_light[i].get_type() == type) {
			Speed = Belts_light[i].Get_speed();
		}
		else { i++; }
	}

	return  Speed * (1000 * 60) / (M_PI * n1);
}

double Round_diametr(double D) {
	Acceptable_Diametr AC;
	double Cmp = Accept_Diams[0].Compare_Diametrs(D);
	int Point = 0;
	for (int i = 1; i < 15; i++) {
		if (Accept_Diams[i].Compare_Diametrs(D) < Cmp) { Cmp = Accept_Diams[i].Compare_Diametrs(D); Point = i; }
	}
	AC = Accept_Diams[Point];
	return AC.Get_Diametr();
}
