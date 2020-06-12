#pragma once
#include "Citizen.h"

/// This class inherits from Citizen class and creates zombie. It infects and kills people
///
/// Zombies are hostile objects, that can eradicate humanity.
class Zombie :
	public Citizen
{
public:
	Zombie();
	/// Constructor which initializes object parameters.
	Zombie(int health, std::string profession, int damage);
};

