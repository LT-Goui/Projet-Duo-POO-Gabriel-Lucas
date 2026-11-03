#include "../../Headers/Entities/Swimmer.h"

void Swimmer::breathing()
{
	if (oxygen < 0)
	{
		hasEndurance = false;
	}
	else
	{
		oxygen--;
	}
}

void Swimmer::takeBreath()
{
	oxygen = maxOxygen;
}

bool Swimmer::canSwim()
{
	return hasEndurance;
}

