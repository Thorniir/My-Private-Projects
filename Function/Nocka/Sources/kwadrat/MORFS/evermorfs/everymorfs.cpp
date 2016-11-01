#include "everymorfs.h"
#include <iostream>
#include "Wyrazenia.h"
#include <math.h>
using namespace std;

everymorfs::everymorfs()
{
}


everymorfs::~everymorfs()
{
}

 


void everymorfs::ogol(float a, float b, float c)
{
	cout << "P.Ogolna: y = ";
	if (b < 0 && c < 0)
		cout << a << "x^2 " << b << "x" << c;
	if (b < 0 && c>0)
		cout << a << "x^2 " << b << "x +" << c;
	if (b > 0 && c < 0)
		cout << a << "x^2 +" << b << "x" << c;
	if (b > 0 && c > 0)
		cout << a << "x^2 +" << b << "x +" << c;
}
 
void everymorfs::kan(float a, float b, float c, float p, float q)
{
	cout << "P.kanoniczna: y = ";
	if (p<0 && q>0)
		cout << a << "( x + " << -p << ")^2 +" << q;
	if (p>0 && q<0)
		cout << a << "( x  " << -p << ")^2 " << q;
	if (p<0 && q<0)
		cout << a << "( x  +" << -p << ")^2 " << q;
	if (p>0 && q>0)
		cout << a << "( x  " << -p << ")^2 +" << q;
	if (p == 0 && q<0)
		cout << a << "(x)^2" << q;
	if (p == 0 && q>0)
		cout << a << "(x)^2 + " << q;
	if (p > 0 && q == 0)
		cout << a << "(x " << -p << ")^2";
	if (p<0 && q == 0)
		cout << a << "(x  + " << -p << ")^2";
	
	
	// a(x+p)(x+p)+9
	//a(x^2+bx+p^2)+9
	//ax^2+bx+p^2+9
	//p=-b/2a
	//-b=p*2a
	//c=
	


}
 
void everymorfs::ilo(float a , float d, float x1, float x2, float x0)
{
	
	if (d < 0)
		cout << "Postac iloczynowa  nie istnieje";
	else
	{
		cout << "P.iloczynowa: y = ";
		if (d > 0)
		{
			if (x1 > 0 && x2 > 0)
				cout << a << "(x " << -x1 << ")(x " << -x2 << ")";
			if (x1 < 0 && x2 < 0)
				cout << a << "(x + " << -x1 << ")(x + " << -x2 << ")";
			if (x1 > 0 && x2 < 0)
				cout << a << "(x  " << -x1 << ")(x + " << -x2 << ")";
			if (x1 < 0 && x2 > 0)
				cout << a << "(x  +" << -x1 << ")(x  " << -x2 << ")";

		}
		if (d == 0)
		{
			if (x0 >= 0)
				cout << a << "(x " << -x0 << ")^2";


			if (x0 < 0)
				cout << a << "(x +" << -x0 << ")^2";

		}

	}
}