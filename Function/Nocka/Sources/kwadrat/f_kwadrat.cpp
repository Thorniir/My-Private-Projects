#include "f_kwadrat.h"
#include "MORF_OG.h"
#include "MORF_KA.h"
#include "MORF_IL.h"
#include "IRREGULARITY.h"
#include <iostream>
//#include <math.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

 
MORF_OG og;
MORF_KA ka;
MORF_IL  il;
IRREGULARITY irregula;

f_kwadrat::f_kwadrat()
{
}


f_kwadrat::~f_kwadrat()
{
}  

  void  f_kwadrat::value()
{
	  for (;;)
	  {

	system("cls");
 
	cout << "Funkcja kwadratowa" << endl;
	cout << "-------------------" << endl;
	cout << "Wybierz typ zadan: " << endl; cout << endl;
	cout << "1. Konwenter Postaci" << endl;
	cout << "2. Nierownosci" << endl;
	cout << "3. Wyjscie" << endl;
	cout <<"================"<< endl;
	cout << "Wybieram: "; cin >> chooseType;

	 
	switch (chooseType)
	{
		case '1':
		{
			convert();	 
			cout << endl;
			system("PAUSE");
		break;
		}

			case '2':
				{
					nier();
					cout << endl;
					system("PAUSE");
					break;
				}
	
					case '3':
					{
						exit(0);
						break;
					}
	}
					
	
	_getch();
	system("cls");

	  }
}

 

void  f_kwadrat::nier()
{
	system("cls");
	cout << "NIEROWNOSCI" << endl;
	cout << "================" << endl;
	irregula.podaj_wzor();

}

void f_kwadrat::convert()
{
	system("cls");
 
	cout << "KONWENTER" << endl;
	cout << "================" << endl;
	cout << "Wybierz obecna postac rownania: " << endl;
	cout << "1. Ogolna " << endl;
	cout << "2. Kanoniczna " << endl;
	cout << "3. Iloczynowa " << endl;
	cout << "================" << endl;
	cout << "Wybieram: ";
	cin >> morfofmath; cout << endl;
	switch (morfofmath)
	{
		case '1':
		{
			system("cls");
			og.OG_LOAD();

			break;
		}
			case '2':
			{
				system("cls");
				ka.KA_LOAD();
				break;
			}
				case'3':
				{
					system("cls");
					il.IL_LOAD();
					break;
				}
	default: cout << "Nie ma takiej opcji!";
	}

}

 