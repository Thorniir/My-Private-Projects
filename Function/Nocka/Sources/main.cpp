#include <iostream>
#include <conio.h>
#include "f_kwadrat.h"
#include <ctime>
#include <time.h>

using namespace std;
 
f_kwadrat fkdrt;
 

int main()
{
/*	clock_t start, stop ;
	  start = clock();*/
	  
	fkdrt.value();

		/*   stop = clock();
		  
		cout << endl;
		 cout << "czas : " << (double)stop - start / CLOCKS_PER_SEC;*/
	
	getchar();
	return 0;
}