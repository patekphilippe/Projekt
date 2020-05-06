#pragma once
#include "Citizen.h"
class Soldier :
	public Citizen
{
public:
	Soldier();
	Soldier(int age, int immune, string profession, int health);
	int ability();
};

