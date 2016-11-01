#include "MORF_IL.h"
#include "f_kwadrat.h"
#include <iostream>
#include <math.h>
#include "Wyrazenia.h"
#include "Dodatkowe_info.h"
#include "everymorfs.h"

using namespace std;

MORF_IL::MORF_IL()
{
}


MORF_IL::~MORF_IL()
{
}

Wyrazenia wyra;
Dodatkowe_info dodainfa;
everymorfs ever;
void MORF_IL::IL_LOAD()
{
	 

	
		cout << "Podaj wartosci funckji: " << endl;
		cout<<"A = "; cin >> a; cout << endl;
		if (a == 0)
			{
				cout << "A nie moze rownac sie 0!" << endl;
				system("PAUSE");
			}
				else
					{
					cout << "======================================" << endl;
					cout << "Wybierz wlasciwa postac funkcji: " << endl;
					cout << "1. a(x-x1)(x-x2)" << endl;
					cout << "2.a(x-x0)^2" << endl;
					cout << "Wybieram postac nr: ";  cin >> morfofmath;
					switch (morfofmath)
					{
						case'1':
							{
							
							all1();
							break;
							}
						case '2':
						{
							all2();
							break;
						}
					}
				
				
						
						
					 
						
				  cout << endl;
	}
								  
}



void MORF_IL::all1()
{
	cout << "====================" << endl;;
	cout << "X1 = "; cin >> il_x[1];
	cout << "X2 = "; cin >> il_x[2];
	system("cls");
	wyra.wyr_iloc2(a, il_x[1], il_x[2]);
	
	if(wyra.il_d>0)
	{
	cout << "A = " << a;
	 
	
	cout << "	X[1] = " << il_x[1];

	cout << "	X[2] = " << il_x[2]; cout << "    |	 ";
	
		iloczynowawieksza(); cout << endl;
	}
			if (il_d < 0)
			{
				cout << "Funkcja jest sprzeczna";
				system("PAUSE");
			}

	if  (wyra.il_d == 0)
	{
		cout << "Niewlasciwy typ funkcji ";
		system("PAUSE");
	}
		cout << "================" << endl;
		 
		dodainfa.info_morf_il(a, wyra.il_d, il_x[1], il_x[2], wyra.il_p, wyra.il_q,wyra.b,wyra.c);	 cout << endl;
		
		 ever.ogol(a, wyra.b, wyra.c); cout << endl;
		
		 ever.kan(a, wyra.b, wyra.c, wyra.il_p, wyra.il_q);
		
			 
}

void MORF_IL::all2()
{

	cout << "====================" << endl;
	cout << "X0 = "; cin >> il_x[1];
	system("cls");
	wyra.wyr_iloc(a, il_x[1]);
	if (wyra.il_d>0)
	{
		cout << "Niewlasciwy typ funkcji";
	}
	if (wyra.il_d < 0)
	{
		cout << "Funkcja jest sprzeczna";
		system("pasue");
	}

	if (wyra.il_d == 0)
	{
		cout << "A = " << a;

		 
		cout << "	X[0] = " << il_x[1]; cout << "    |	 ";   iloczynowarowna();
	}

			cout << "================" << endl;
			 
			dodainfa.info_morf_il(a, wyra.il_d, wyra.il_x[1], wyra.il_x[2], wyra.il_p, wyra.il_q, wyra.b, wyra.c);	 cout << endl;
		 	ever.ogol(a, wyra.b, wyra.c); cout << endl;
		 	ever.kan(a, wyra.b, wyra.c, wyra.il_p, wyra.il_q);
		 
}

 
	

 

 
 


void MORF_IL::iloczynowawieksza()
{
	cout << "P.iloczynowa: y = ";

	if (il_x[1] > 0 && il_x[2] > 0)
		cout << a << "(x " << -il_x[1] << ")(x " << - il_x[2] << ")";
	if (il_x[1] < 0 &&  il_x[2] < 0)
		cout << a << "(x + " << -il_x[1] << ")(x + " << - il_x[2] << ")";
	if (il_x[1] > 0 && il_x[2] < 0)
		cout << a << "(x  " << -il_x[1] << ")(x + " << - il_x[2] << ")";
	if (il_x[1] < 0 &&  il_x[2] > 0)
	{
		cout << a << "(x + " << -il_x[1] << ")(x  " << - il_x[2] << ")";
	}

	
}

void MORF_IL::iloczynowarowna()
{
	
		cout << "P.iloczynowa: y = ";
		  
				if (il_x[1] >= 0)
					cout << a << "(x " << -il_x[1] << ")^2" << endl;
				if (il_x[1] < 0)
					cout << a << "(x + " << -il_x[1] << ")^2" << endl;
				
				
}

 