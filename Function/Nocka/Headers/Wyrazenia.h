#pragma once
#include "f_kwadrat.h"
class Wyrazenia :	public f_kwadrat
{
public:
	float og_d, og_p, og_q, og_x[2];
	float ka_d, ka_p, ka_q, ka_x[2];
	float il_d, il_p, il_q, il_x[2];
	float ir_d, ir_q, ir_p, ir_x[2];
	 
public:
	Wyrazenia();
	~Wyrazenia();
	void wyr_og(float, float, float);
	void wyr_kan(float, float, float);
	void wyr_iloc(float, float);
	void wyr_iloc2(float, float, float);
	void wyr_irre(float, float, float);
};

