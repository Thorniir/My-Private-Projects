#include "Dodatkowe_info.h"
#include <iostream>
#include "Wyrazenia.h"
#include "everymorfs.h"
using namespace std;


Dodatkowe_info::Dodatkowe_info()
{
}


Dodatkowe_info::~Dodatkowe_info()
{
}

everymorfs ev;

void Dodatkowe_info::info_morf_og(float a, float d, float x1,float x2, float x0, float p, float q)
{
	{

		cout << "Delta = " << d << endl;
	//	cout.precision(2);


		if (d > 0)
		{

			cout << "X1 = " << x1 << endl;
			cout << "X2 = " << x2 << endl;
		}
		if (d == 0)
		{
			cout << "X0 = " << x0 << endl;
		}

		cout << "P = " << p << endl;

		if (q == 0)
		{
			q = 0;
			cout << "Q = " << q << endl;
		}
		else
		{
			cout << "Q = " << q << endl;
		}
		if (a > 0)
		{
			cout << "Funkcja rosnie dla : " << "[" << p << ", infinity)" << endl;
			cout << "Funkcja maleje dla : " << "(- infinity , " << p << "]" << endl;
		}

		if (a < 0)
		{
			cout << "Funkcja fosnie dla: " << "(- infinity , " << p << "]" << endl;
			cout << "Funkcja maleje dla: " << "[" << p << ",  infinity)" << endl;
		}

		cout << "W(" << p << "," << q << ")" << endl;

		if (a > 0)
			cout << "Y = " << "(" << q << ",infinity)";
		if (a<0)
			cout << "Y = " << "(-infinity ," << q << ")";

		cout << endl;
		cout << "=================" << endl;
		cout << endl;


	}
}

void Dodatkowe_info::info_morf_ka(float a,float b, float c, float d, float x1, float x2, float x0, float p, float q)
{
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;

	cout << "Delta = " << d << endl;



	if (d > 0)
	{

		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	if (d == 0)
	{
		cout << "X0 = " << x0 << endl;
	}

	if (a > 0)
	{
		cout << "Funkcja rosnie dla : " << "[" << p << ", infinity)" << endl;
		cout << "Funkcja maleje dla : " << "(- infinity , " << p << "]" << endl;
	}

	if (a < 0)
	{
		cout << "Funkcja fosnie dla: " << "(- infinity , " << p << "]" << endl;
		cout << "Funkcja maleje dla: " << "[" << p << ",  infinity)" << endl;
	}

	cout << "W(" << p << "," << q << ")" << endl;

	if (a > 0)
		cout << "Y = " << "(" << q << ",infinity)";
	if (a<0)
		cout << "Y = " << "(-infinity ," << q << ")";


	cout << endl;
	cout << "=================" << endl;
	cout << endl;
}

void Dodatkowe_info::info_morf_il(float a, float d, float x1, float x2, float p, float q,float b, float c)
{
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;

	
	cout << "Delta = " << d << endl;

	cout << "P = " << p << endl;
	if (q == 0)
	{
		q = 0;
		cout << "Q = " << q << endl;
	}
	else
	{
		cout << "Q = " << q << endl;
	}
	if (a > 0)
	{
		cout << "Funkcja rosnie dla : " << "[" << p << ", infinity)" << endl;
		cout << "Funkcja maleje dla : " << "(- infinity , " << p << "]" << endl;;
	}

	if (a < 0)
	{
		cout << "Funkcja fosnie dla: " << "(- infinity , " << p << "]" << endl;
		cout << "Funkcja maleje dla: " << "[" << p << ",  infinity)" << endl;
	}
	cout << "W(" << p << "," << q << ")" << endl;

	if (a > 0)
		cout << "Y = " << "(" << q << ",infinity)";
	if (a<0)
		cout << "Y = " << "(-infinity ," << q << ")";


	cout << endl;
	cout << "=================" << endl;
	cout << endl;
}

void Dodatkowe_info::info_irregularity(float a, float b, float c, float d, float x1, float x2, float x0, float p, float q)
{
	cout << "Delta = " << d << endl;

	cout.precision(2);
	if (d > 0)
	{

		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	if (d == 0)
	{
		cout << "X0 = " << x0 << endl;
	}
	if (a > 0)
	{
		cout << "Funkcja rosnie dla : " << "[" << p << ", infinity)" << endl;
		cout << "Funkcja maleje dla : " << "(- infinity , " << p << "]" << endl;;
	}

	if (a < 0)
	{
		cout << "Funkcja fosnie dla: " << "(- infinity , " << p << "]" << endl;
		cout << "Funkcja maleje dla: " << "[" << p << ",  infinity)" << endl;
	}

	cout << "W(" << p << "," << q << ")" << endl;
	if (a > 0)
		cout << "Y = " << "(" << q << ",infinity)" << endl;;
	if (a<0)
		cout << "Y = " << "(-infinity ," << q << ")" << endl;

	ev.kan(a, b, c, p, q);  cout << endl;
	ev.ilo(a, d, x1, x2, x0);
	cout << endl;
	cout << "=================" << endl;
	cout << endl;
}