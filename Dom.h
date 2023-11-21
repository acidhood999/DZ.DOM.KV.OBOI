#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 


using namespace std;

class Kvartira
{
protected:

	string spisok{R"(
	 __________
	|          |
	| Квартира |
	|__________|)"};
	int KOM[4] = { 1,2,3,4 };

};

class Komnati : public Kvartira
{
protected:
	const int n = 4;
	int* sizeKOM = new int[n];
	int potolokKOM;
	string nameKOM[4] = { "Зал","Комната","Кухня","Туалет" };
	int schetchik{};
public:
	
};

class RylonPotolka : public Komnati
{
protected:
	
	string namePotolok[4]{ "Натяжной", "Глянцевый","Замшевый","Подвесной"};
	int* size = new int[n];
	int price[4];
	int randob{};

public:

	RylonPotolka()
	{
		srand(time(NULL));
		string x = spisok;
		cout << x << endl << endl;
		for (int i = 0; i < 4; ++i)
		{
			sizeKOM[i] = rand() % 21+10;

			if (sizeKOM[i] < 20)
			{
				cout << KOM[i] << " - " << nameKOM[i] << " |" << " Размеры: " << sizeKOM[i] << "m" << endl;
				cout << "Потолок не клеим!(Комната маленькая)" << endl << endl;
			}
			if (sizeKOM[i] >= 20)
			{
				cout << KOM[i] << " - " << nameKOM[i] << " |" << " Размеры: " << sizeKOM[i] << "m" << endl;
				cout << "Клеим потолок!(Комната подходит по размеру)" << endl;
				size[i] = sizeKOM[i];
				schetchik++;
				randob = rand() % 4;
				cout <<"Название потолка: " << namePotolok[randob]<<" | "<<"Размер потолка: "<< sizeKOM[i]/3<<"m" << endl;
				price[i]=rand() % 6001 + 3000;
				cout << "Цена: "<< price[i]<<"руб" << endl << endl;
			}

		}
		

	}
	

};






