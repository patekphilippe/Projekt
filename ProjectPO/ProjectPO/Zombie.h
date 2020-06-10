#pragma once
#include "Citizen.h"

/// This class inherits from Citizen class, it infects and kill people
///
/// Zombies are hostile objects, which can eradicate humanity.
class Zombie :
	public Citizen
{
public:
	Zombie();
	/// Constructor which initializes object parameters.
	Zombie(int health, std::string profession, int damage);
};

