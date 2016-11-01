#include "MORF_OG.h"
#include "f_kwadrat.h"
#include <iostream>
#include <math.h>
#include "Wyrazenia.h"
#include "everymorfs.h"
#include "Dodatkowe_info.h" 



using namespace std;

 
Wyrazenia wyraj;
everymorfs every;
Dodatkowe_info dodinf;


MORF_OG::MORF_OG()
{
}


MORF_OG::~MORF_OG()
{
}


void  MORF_OG::OG_LOAD()
{
	 
		 
	 
		 
		 cout << "Podaj  wartosci rownania y=ax^2+bx+c : " << endl;
		cout << "A = "; cin >> a; cout << endl;
		if (a == 0)
			cout << "A nie moze rownac sie 0!" << endl;
			else 
				{ 
					cout << "B = "; cin >> b; cout << endl;
					cout << "C = "; cin >> c; cout << endl;
					system("cls"); 	wyraj.wyr_og(a, b, c);
					
					cout << "A = " << a;
					cout << "	B = " << b;
					cout << "	C = " << c; cout << "    |	 ";  
					every.ogol(a, b, c); cout << endl;
					cout << "================" << endl;
					dodinf.info_morf_og(a, wyraj.og_d, wyraj.og_x[1], wyraj.og_x[2], wyraj.og_x[0], wyraj.og_p, wyraj.og_q);
				
				
				
					cout << endl; 
			  every.kan(a, b, c,wyraj.og_p,wyraj.og_q); cout << endl;
				 	 every.ilo(a,wyraj.og_d,wyraj.og_x[1],wyraj.og_x[2],wyraj.og_x[0] );

					

			 
			 
			 
		} 
	 
}
 