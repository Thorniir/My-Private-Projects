#include "MORF_KA.h"
#include "f_kwadrat.h"
#include <iostream>
#include <math.h>
#include "Wyrazenia.h"
#include "everymorfs.h"
#include "Dodatkowe_info.h"
 



using namespace std;



MORF_KA::MORF_KA()
{
}


MORF_KA::~MORF_KA()
{
}
Wyrazenia wyraze;
everymorfs everym;
Dodatkowe_info dodinfo;

void MORF_KA::KA_LOAD()
{
	cout << "Podaj  wartosci rownania y=a(x-p)^2 +q : " << endl;
	cout << "A = "; cin >> a; cout << endl;
		if (a == 0)
			cout << "A nie moze rownac sie 0!" << endl;
			else
				{
					cout << "P = "; cin >> ka_p; cout << endl;
					cout << "Q = "; cin >> ka_q; cout << endl;
					system("cls"); wyraze.wyr_kan(ka_p, ka_q, a);
					cout << "A = " << a;
					cout << "	P = " << ka_p;
					cout << "	Q = " << ka_q; cout << "    |	 ";
					everym.kan(a, wyraze.b, wyraze.c, ka_p, ka_q); cout << endl;
					cout << "================" << endl;
					dodinfo.info_morf_ka(a,wyraze.b, wyraze.c, wyraze.ka_d, wyraze.ka_x[1], wyraze.ka_x[2], wyraze.ka_x[0],  ka_p,  ka_q);
			
						everym.ogol(a, wyraze.b, wyraze.c); cout << endl;
						everym.ilo(a,  wyraze.ka_d, wyraze.ka_x[1], wyraze.ka_x[2], wyraze.ka_x[0] );
				}
			 
}
