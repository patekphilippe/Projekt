#pragma once
#include "Citizen.h"
#include "Soldier.h"
#include "MedicalStaff.h"
#include "Zombie.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

class World
{
public:
	vector<Citizen* > population;
	void setPopulation();
	void displayPopulation();
	void makeBaby();
	void infectHuman();
	void killZombie();
};

