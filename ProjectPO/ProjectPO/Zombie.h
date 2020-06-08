#pragma once
#include "Citizen.h"
using namespace std;
/// This class inherits from Citizen class. It infects and kill people.
/// Zombies are hostile objects, which can eradicate humanity.
class Zombie :
	public Citizen
{
public:
	Zombie();
	Zombie(int health, string profession, int damage);
};

