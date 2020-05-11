#pragma once
#include "Citizen.h"
using namespace std;
class Zombie :
	public Citizen
{
private:
public:
	Zombie();
	Zombie(int health, string profession, int damage);
	int ability();
};

