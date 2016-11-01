#include "Wyrazenia.h"
#include <iostream>


Wyrazenia::Wyrazenia()
{
}


Wyrazenia::~Wyrazenia()
{
}

void  Wyrazenia::wyr_og(float a, float b, float c)
{
	og_d = (b*b) - 4 * (a*c);
	og_p = -b / (2 * a);
	og_q = -og_d / (4 * a);

	og_x[1] = (-b - sqrt(og_d)) / (2 * a);
	og_x[2] = (-b + sqrt(og_d)) / (2 * a);
	og_x[0] = -b / (2 * a);

	

	
}

void Wyrazenia::wyr_kan(float p, float q, float a)
{
	b = -2 * a*p;
	c = a*(p*p) + q;
 

	ka_d = (b*b) - 4 * (a*c);
	ka_x[1] = (-b - sqrt(ka_d)) / (2 * a);
	ka_x[2] = (-b + sqrt(ka_d)) / (2 * a);
	ka_x[0] = -b / (2 * a);
		
}

void Wyrazenia::wyr_iloc(float a, float x1)
{
	//a(x-x0)^2
	//a(x-x0)(x-x0)
	//a(x^2-2x0x+x0^2)
	//ax^2-2ax0x+ax0^2
	 b=-2*a*x1;
	 c=a*(x1*x1);


	il_d = (b*b) - 4 * (a*c);  
	 
	
	il_x[2] = -b + sqrt(il_d) / a * 2;	  
	

	il_p = -b / (2 * a);
	il_q = -il_d / (4 * a); 

	
}

 
void Wyrazenia::wyr_iloc2(float a, float x1, float x2)
{
	//x1=p+ sqrt(-q/a) x2=p- sqrt(-q/a);

	//a(x-x1)(x-x2)   
	//a*(x^2-x2x-x1x+x1x2)
	//ax^2-ax2x-ax1x+ax1x2
	//c= a*x1*x2
	//b=-a*x2-a*x1
	//
	b = -a*x1-a*x2;
	c = a*x1*x2;
	 

	il_d = (b*b) - 4 * (a*c);  
	 
	il_p = -b / (2 * a);
	il_q = -il_d / (4 * a); 

}

void Wyrazenia::wyr_irre(float a, float b, float c)
{
	ir_d = (b*b) - 4 * (a*c);
	ir_x[1] = (-b - sqrt(ir_d)) / (2 * a);
	ir_x[2] = (-b + sqrt(ir_d)) / (2 * a);
	ir_x[0] = -b / (2 * a);

	ir_p = ir_x[0];
	ir_q = -ir_d / (a * 4);
}