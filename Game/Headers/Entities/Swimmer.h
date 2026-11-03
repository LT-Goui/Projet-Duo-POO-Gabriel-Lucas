#pragma once
#include "Entity.h"


class Swimmer
{
public:
	void breathing();
	void takeBreath();
	bool canSwim();

private:
	int maxOxygen = 3;
	int oxygen = maxOxygen;
	bool hasEndurance = true;


};

