#include "IRREGULARITY.h"
#include <iostream>
#include "f_kwadrat.h"
#include "Wyrazenia.h"
#include "everymorfs.h"
#include "Dodatkowe_info.h"
using namespace std;

IRREGULARITY::IRREGULARITY()
{
}


IRREGULARITY::~IRREGULARITY()
{
}

Wyrazenia wyr;
everymorfs eve;
Dodatkowe_info doda;

void IRREGULARITY::podaj_wzor()
{
	cout << "Podaj  wartosci nierownnosci y=ax^2+bx+c : " << endl;
	cout << "A = "; cin >> a; cout << endl;
	if (a == 0)
		cout << "A nie moze rownac sie 0!" << endl;
		else
			{
				cout << "B = "; cin >> b; cout << endl;
				cout << "C = "; cin >> c; cout << endl;
				wyr.wyr_irre(a, b, c);
				jakie();
				

			}
}

 

void IRREGULARITY::jakie()
{
	cout << "Wybierz typ nierownosci: " << endl;
	cout << "1.y > 0" << endl;
	cout << "2. y >= 0" << endl;
	cout << "3. y < 0" << endl;
	cout << "4. y <= 0" << endl;
	cout << "5. y = 0" << endl; 
	cout <<"==================="<< endl;
	cout << "Wybieram: "; cin >> chooseType;
	
	switch(chooseType)
		{
		case '1':
			{
			system("cls");
			cout << "A = " << a;
			cout << "	B = " << b;
			cout << "	C = " << c; cout << "    |	 ";		eve.ogol(a,b,c); cout << endl;
			cout << "================" << endl;
			doda.info_irregularity(a, b, c, wyr.ir_d, wyr.ir_x[1], wyr.ir_x[2], wyr.ir_x[0], wyr.ir_p, wyr.ir_q);
			wieksze();
			break;
			}
				case '2':
					{
			
					  system("cls");
					cout << "A = " << a;
					cout << "	B = " << b;
					cout << "	C = " << c; cout << "    |	 ";		eve.ogol(a, b, c); cout << endl;
					cout << "================" << endl;
					doda.info_irregularity(a, b, c, wyr.ir_d, wyr.ir_x[1], wyr.ir_x[2], wyr.ir_x[0], wyr.ir_p, wyr.ir_q);
					wiekszelubrowne();
					break;
					}
						case'3':
							{
							system("cls");
							cout << "A = " << a;
							cout << "	B = " << b;
							cout << "	C = " << c; cout << "    |	 ";		eve.ogol(a, b, c); cout << endl;
							cout << "================" << endl;
							doda.info_irregularity(a, b, c, wyr.ir_d, wyr.ir_x[1], wyr.ir_x[2], wyr.ir_x[0], wyr.ir_p, wyr.ir_q);
							mniejsze();
	
								break;
							}
								case '4':
									{
										system("cls");
										cout << "A = " << a;
										cout << "	B = " << b;
										cout << "	C = " << c; cout << "    |	 ";		eve.ogol(a, b, c); cout << endl;
										cout << "================" << endl;
										doda.info_irregularity(a, b, c, wyr.ir_d, wyr.ir_x[1], wyr.ir_x[2], wyr.ir_x[0], wyr.ir_p, wyr.ir_q);
										mniejszelubrowne();
											break;
									}
											case '5':
												{
													system("cls");
													cout << "A = " << a;
													cout << "	B = " << b;
													cout << "	C = " << c; cout << "    |	 ";		eve.ogol(a, b, c); cout << endl;
													cout << "================" << endl;
													doda.info_irregularity(a, b, c, wyr.ir_d, wyr.ir_x[1], wyr.ir_x[2], wyr.ir_x[0], wyr.ir_p, wyr.ir_q);
													rowne();
													break;
												}

									default: cout << "Nie ma takiej opcji!";
		}
}

void  IRREGULARITY::wieksze()
{
	/*//ax^2+bx+c >0
	//x1,x2
	if (d>0)
	x1,x2 
	xC	<-infinity,x1> && <x2,infinity>
	if(d<0)
	xCR
	if(d==0)
	x0
	xC<-infinity,x0> <x0,infinity>

	*/
	 
	if (a>0 && wyr.ir_d > 0)
	{
		cout << "Xc (- infinity ," << wyr.ir_x[1] << ") U ("<< wyr.ir_x[2]<<", infinity)";
	}
	if (a < 0 && wyr.ir_d>0)
	{
		cout << "Xc (" << ir_x[1] << "," << wyr.ir_x[2] << ")";
	}
	if (a> 0 && wyr.ir_d < 0)
	{
		cout << "Funkcja nalezy do zbioru liczb rzeczywistych";
	}
	if (a < 0 && wyr.ir_d < 0)
	{
		cout << "Funkcja nalezy do zbioru Pustego";
	}
	if (a>0 && wyr.ir_d == 0)
	{
		cout << "Xc (-infinity ,"<< wyr.ir_x[0]<<") U ("<< wyr.ir_x[0]<<", infinity)";
	}
	if (a < 0 && wyr.ir_d == 0)
	{
		cout << "Funkcja nalezy do zbioru Pustego";
	}
}
 
void IRREGULARITY::wiekszelubrowne()
{
	if (a> 0 && wyr.ir_d > 0)
	{
		cout << "Xc (- infinity ," << wyr.ir_x[1] << "> U <" << wyr.ir_x[2] << ", infinity)";
	}
		if (a < 0 && wyr.ir_d>0)
			{
				cout << "Xc <" << wyr.ir_x[1] << "," << wyr.ir_x[2] << ">";
			}
				if (a>  0 && wyr.ir_d < 0)
					{
						cout << "Funkcja nalezy do zbioru liczb rzeczywistych";
					}
						if (a < 0 && wyr.ir_d < 0)
							{
								cout << "Funkcja nalezy do zbioru Pustego";
							}
				if (a> 0 && wyr.ir_d == 0)
					{
						cout << "Xc (-infinity ," << wyr.ir_x[0] << "> U <" << wyr.ir_x[0] << ", infinity)";
					}
		if (a < 0 && wyr.ir_d == 0)
			{
				cout << "Xc {" << wyr.ir_x[0] << "}";
			}
}

void IRREGULARITY::mniejsze() 
{
	if (a>0 && wyr.ir_d > 0)
	{
		cout << "Xc (" << wyr.ir_x[1] << "," << wyr.ir_x[2] << ")";
	}
		if (a < 0 && wyr.ir_d>0)
			{
				cout << "Xc (-infinity ," << wyr.ir_x[1] << ") U (" << wyr.ir_x[2] << ", infinity)";
			}
			if (a> 0 && wyr.ir_d < 0)
				{
					cout << "Funkcja nalezy do zbioru pustego";
				}
				if (a < 0 && wyr.ir_d < 0)
					{
						cout << "Funkcja nalezy do zbioru liczb rzeczywistych";
					}
					if (a>0 && wyr.ir_d == 0)
						{
							cout << "Funkcja nalezy do zbioru pustego";
						}
				if (a < 0 && wyr.ir_d == 0)
					{
						cout << "Xc (-infinity ," << wyr.ir_x[0] << ") U (" << wyr.ir_x[0] << ", infinity)";
					}
}

void IRREGULARITY::mniejszelubrowne()
{
	if (a>0 && wyr.ir_d > 0)
	{
		cout << "Xc <" << wyr.ir_x[1] << "," << wyr.ir_x[2] << ">";
	}
		if (a <  0 && wyr.ir_d>0)
			{
				cout << "Xc (-infinity ," << wyr.ir_x[1] << "> U <" << wyr.ir_x[2] << ", infinity)";
			}
			if (a> 0 && wyr.ir_d < 0)
				{
					cout << "Funkcja nalezy do zbioru pustego";
				}
				if (a <  0 && wyr.ir_d < 0)
					{
						cout << "Funkcja nalezy do zbioru liczb rzeczywistych";
					}
					if (a>0 && wyr.ir_d == 0)
						{
							cout << "Xc {"<< ir_x[0]<<"}";
						}
				if (a <  0 && wyr.ir_d == 0)
					{
						cout << "Xc (-infinity ," << wyr.ir_x[0] << ") U (" << wyr.ir_x[0] << ", infinity)";
					}
}

void IRREGULARITY::rowne()
{
	if (wyr.ir_d > 0)
	{
		cout << "X = {" << wyr.ir_x[1] << "," << wyr.ir_x[2] << "}";
	}
		if (wyr.ir_d < 0)
			{
				cout << "Funkcja nalezy do zbioru pustego";
			}
			if (wyr.ir_d==0)
					cout << "X = " << wyr.ir_x[0];
}