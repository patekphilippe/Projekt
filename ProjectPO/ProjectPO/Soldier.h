#pragma once
#include "Citizen.h"
///This object inherits from Citizen class. It kills zombies.
///He can stop zombie apocalypse by destroying all zombies.
class Soldier :
	public Citizen
{
public:
	Soldier();
	Soldier(int age, int immune, string profession, int health, int damage);
	///This specific ability is to deal damage to zombies.
	///<returns></returns> random amount of damage -(0 - 9)
	int ability();
};

