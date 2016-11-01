#pragma once
#include "f_kwadrat.h"
class Dodatkowe_info : public f_kwadrat
{
public:
	Dodatkowe_info();
	~Dodatkowe_info();
	void info_morf_og(float ,float, float, float, float, float, float);
	void info_morf_ka(float, float, float, float, float, float, float, float, float);
	void info_morf_il(float, float, float, float, float, float, float, float);
	void info_irregularity(float, float, float, float, float, float, float, float, float);
};

