#pragma once
#include "Citizen.h"
class Soldier :
	public Citizen
{
private:
public:
	Soldier();
	Soldier(int age, int immune, string profession, int health, int damage);
	int ability();
};

