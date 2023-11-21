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
	| �������� |
	|__________|)"};
	int KOM[4] = { 1,2,3,4 };

};

class Komnati : public Kvartira
{
protected:
	const int n = 4;
	int* sizeKOM = new int[n];
	int potolokKOM;
	string nameKOM[4] = { "���","�������","�����","������" };
	int schetchik{};
public:
	
};

class RylonPotolka : public Komnati
{
protected:
	
	string namePotolok[4]{ "��������", "���������","��������","���������"};
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
				cout << KOM[i] << " - " << nameKOM[i] << " |" << " �������: " << sizeKOM[i] << "m" << endl;
				cout << "������� �� �����!(������� ���������)" << endl << endl;
			}
			if (sizeKOM[i] >= 20)
			{
				cout << KOM[i] << " - " << nameKOM[i] << " |" << " �������: " << sizeKOM[i] << "m" << endl;
				cout << "����� �������!(������� �������� �� �������)" << endl;
				size[i] = sizeKOM[i];
				schetchik++;
				randob = rand() % 4;
				cout <<"�������� �������: " << namePotolok[randob]<<" | "<<"������ �������: "<< sizeKOM[i]/3<<"m" << endl;
				price[i]=rand() % 6001 + 3000;
				cout << "����: "<< price[i]<<"���" << endl << endl;
			}

		}
		

	}
	

};






