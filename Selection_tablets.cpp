#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include"Selection_tablets.h"
#include <math.h>
using namespace std;
//class Belt {//Таблица 1.1
//	std::string Name;
//	double Width[2];//0-min 1-max
//	double Depth[2];//0-min 1-max
//	double Speed;
//	std::string transferred_loads;
//	std::string UTS;
//	double acceptable_short_overload;
//	std::string lifetime;
//	double Breaking_Point[2];// 0-min/без прослойки 1-max/с прослойкой
//	double Uprugost_M[2];//0-Растяжение 1-Изгиб
//	int Break_size_change;
//	double density[2];
//	double Diametr_dept_rel_rec[2];//0,0-1,0- рекомендуемое 0,1-1,1 - допускаемое
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
class Belt_light {//Упрощённая версия таблицы 1.1. для расчёта диаметра через скорость
private:
	int type;
	double Speed;// Скорость ремня
	double Depth[2];// 0-min 1-max//Толщина ремня
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
class Acceptable_Diametr {//Таблица 13.18
	double Diametr;//Диаметр шкива
	double Accept_dev;//Предельное отклонение
	double Arrow;//Стрела выпуклости
	double Width;//ширина шкива
	double Max_dev;// Предельное отклонение
	double Recomended_b_width;// Рекомендуемая ширина шкива
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


class Acceptable_Length {// Таблица 1.3
	int type;//1 - CКН-40 2- Наиритовый латекс
	double Depth[2];
	double Width;
	double Inner_length[9];
	double Max_dev;
public:
	Acceptable_Length(int T, double D_1, double D_2, double W, double IL_1, double IL_2, double IL_3, double IL_4, double IL_5, double IL_6, double IL_7, double IL_8, double IL_9, double MD) :type{ T }, Width{ W }, Max_dev{ MD } {
		Depth[0] = D_1; Depth[1] = D_2;
		Inner_length[0] = IL_1;
		Inner_length[1] = IL_2;
		Inner_length[2] = IL_3;
		Inner_length[3] = IL_4;
		Inner_length[4] = IL_5;
		Inner_length[5] = IL_6;
		Inner_length[6] = IL_7;
		Inner_length[7] = IL_8;
		Inner_length[8] = IL_9;
	}
	Acceptable_Length() {};
	double Compare_length(double L, int i) {
		double R_L = Inner_length[i]-L;
		//if (R_L < 0)R_L *= -1;
		return R_L;
	}
	double Get_Inner_Length(int i) {return Inner_length[i];}
};

class Synthetic_belt {
private:
	double Depth;
	double D_min;
public:
	Synthetic_belt(double depth, double D) : Depth{depth}, D_min{D}{}
	double get_Depth() { return Depth; }
	double get_Diametr() { return D_min; }
};

class Rubber_belt {
	int type; //1-Б 2-БНКЛ
	int gaskets;//Число прокладок
	//bool IsInterlayer;
	double D_min_Rec;
	double D_min_dop;
public:
	Rubber_belt(int Type, int Gask, double D_min_1, double D_min_2) :type{ Type }, gaskets{ Gask }, D_min_Rec{ D_min_1 }, D_min_dop{ D_min_2 } {}
	int Get_type() { return type; }
	int get_gaskets() { return gaskets; }
	double get_R_Diametr() { return D_min_Rec; }
	double get_D_Diametr(){ return D_min_dop; }
};



#pragma endregion
//Belt Tab_1_1[3]{
//	Belt{"Тканевые прорезиненые конечной длины(ГОСТ 38.05.98 76)",{20,500},{3,3.5},
//	30,"Малые, средние, большие","Высокая",1.3,"Средняя",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40}},
//		Belt("Тканевые прорезиненые конечной длины(ГОСТ 38.05.98 76)",{20,500},{3,3.5},
//	30,"Малые, средние, большие","Высокая",1.3,"Средняя",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40}),Belt("Тканевые прорезиненые конечной длины(ГОСТ 38.05.98 76)",{20,500},{3,3.5},
//	30,"Малые, средние, большие","Высокая",1.3,"Средняя",{44,37},{200,140},18,{1250,1500},
//		{0,30},{0,40})
//};
#pragma region Tables
Belt_light Belts_light[]{//Для расчётов
	Belt_light(1,30,3,13.5,0,30,0,40),//Тканевыq прорезиненный
	Belt_light(2,100,0.4,0.6,50,70,100,150),//Синтетический тип 1
	Belt_light(3,50,1,1.2,50,70,100,150)//Синтетический тип 2
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

Synthetic_belt Synthetic_belts[]{//Синтетические ремни
	Synthetic_belt(0.4,28),
	Synthetic_belt(0.5,36),
	Synthetic_belt(0.6,45),
	Synthetic_belt(0.7,56),
	Synthetic_belt(0.8,63),
	Synthetic_belt(0.9,71),
	Synthetic_belt(1.0,80),
	Synthetic_belt(1.1,90),
	Synthetic_belt(1.2,100)
};


Acceptable_Length Accept_Lengths[]{//Таблица 1.3
	Acceptable_Length(1,0.4,0.6,10,250,260,280,300,320,340,0,0,0,20),
	Acceptable_Length(1,0.4,0.6,15,350, 380, 400,420,450,480,0,0,0,20),
	Acceptable_Length(1,0.4,0.6,20,500,530,560,600,630,670,0,0,0,20),
	Acceptable_Length(1,0.4,0.6,25,710,750,800,850,900,950,0,0,0,25),
	Acceptable_Length(1,0.4,0.6,30,1000,1060,1120,1180, 1250,1320,1400,0,0,25),
	Acceptable_Length(2,1.0,1.2,40,1500,1600,1700,1800,1900,2000,0,0,0,40),
	Acceptable_Length(2,1.0,1.2,50,2120,2240,2360,2500,2650,2800,3000,3150,3350,45),
	Acceptable_Length(2,1.0,1.2,60,2120,2240,2360,2500,2650,2800,3000,3150,3350,45),
	Acceptable_Length(2,1.0,1.2,80,3550, 3750, 4000,0,0,0,0,0,0,55),
	Acceptable_Length(2,1.0,1.2,100,3550, 3750, 4000,0,0,0,0,0,0,55)
};

Rubber_belt Rubber_belts_With_interlayer[]{//C прослоqками
	Rubber_belt(1,3,180,140),
	Rubber_belt(1,4,224,180),
	Rubber_belt(1,5,315,224),
	Rubber_belt(1,6,355,315),
	Rubber_belt(2,3,140,112),
	Rubber_belt(2,4,180,140),
	Rubber_belt(2,5,224,180),
	Rubber_belt(2,6,280,200)
};

Rubber_belt Rubber_belts_Without_interlayer[]{//Без прослоек
	Rubber_belt(1,3,140,112),
	Rubber_belt(1,4,200,140),
	Rubber_belt(1,5,250,180),
	Rubber_belt(1,6,315,224),
	Rubber_belt(2,3,125,90),
	Rubber_belt(2,4,160,112),
	Rubber_belt(2,5,200,140),
	Rubber_belt(2,6,224,180)
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

double Round_Length(double Length) {
	Acceptable_Length A_L;
	double Compare=Accept_Lengths[0].Compare_length(Length,0);
	for (int i = 0; i < 10; i++) {

	}

	return 0;
}

double D1_synthetic(double Depth) {
	int Counter = 0;
	double D1;
	while (Synthetic_belts[Counter].get_Depth()!= Depth) {
		Counter++;
	}
	D1 = Synthetic_belts[Counter].get_Diametr();
	return D1;

}

double D1_rubber(int type, int gaskets,bool Interlayer) {
	int count = 0;
	
	if (Interlayer == true) {
		while (Rubber_belts_With_interlayer[count].Get_type() != type && Rubber_belts_With_interlayer[count].get_gaskets() != gaskets) count++;
		return Rubber_belts_With_interlayer[count].get_D_Diametr();
	}
	else {
		while (Rubber_belts_Without_interlayer[count].Get_type() != type && Rubber_belts_Without_interlayer[count].get_gaskets() != gaskets) count++;
		return Rubber_belts_Without_interlayer[count].get_D_Diametr();
	}
}
double D1_rubber_R(int type, int gaskets, bool Interlayer) {
	int count = 0;

	if (Interlayer == true) {
		while (Rubber_belts_With_interlayer[count].Get_type() != type && Rubber_belts_With_interlayer[count].get_gaskets() != gaskets) count++;
		return Rubber_belts_With_interlayer[count].get_R_Diametr();
	}
	else {
		while (Rubber_belts_Without_interlayer[count].Get_type() != type && Rubber_belts_Without_interlayer[count].get_gaskets() != gaskets) count++;
		return Rubber_belts_Without_interlayer[count].get_R_Diametr();
	}
}