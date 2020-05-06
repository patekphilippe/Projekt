#pragma once
#include "Citizen.h"
using namespace std;
class Zombie :
	public Citizen
{
public:
	Zombie();
	Zombie(int health, string profession);
	int ability();
};

