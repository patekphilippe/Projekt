#pragma once
#include "Citizen.h"

///This class inherits from Citizen class and creates soldiers.
///Soldier can stop an apocalypse by destroying all zombies.
class Soldier :
	public Citizen
{
public:
	/// Constructor which initializes object parameters.
	Soldier(int age, int immune, std::string profession, int health, int damage);
	///This specific ability makes damage to zombies.
	///<returns></returns> random amount of damage -(0 - 9)
	int ability();
};

