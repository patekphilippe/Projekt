#pragma once
#include "Citizen.h"

///This object inherits from Citizen class, it kills zombies.
///He can stop zombie apocalypse by destroying all zombies.
class Soldier :
	public Citizen
{
public:
	/// Constructor which initializes object parameters.
	Soldier(int age, int immune, std::string profession, int health, int damage);
	///This specific ability is to deal damage to zombies.
	///<returns></returns> random amount of damage -(0 - 9)
	int ability();
};

