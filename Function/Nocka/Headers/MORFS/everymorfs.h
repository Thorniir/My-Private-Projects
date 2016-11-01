#pragma once
#include "f_kwadrat.h"
#include "Wyrazenia.h"
class everymorfs :public  Wyrazenia
{
public:
	void ogol(float, float, float);
	void kan(float, float, float, float, float );
	void ilo(float, float, float, float, float );
	everymorfs();
	~everymorfs();
};

