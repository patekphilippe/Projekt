#pragma once
#include "Citizen.h"
#include "Soldier.h"
#include "MedicalStaff.h"
#include "Zombie.h"
#include "Region.h"
#include "Virus.h"
#include "RespiratoryVirus.h"
#include "NerveVirus.h"
#include "ReproductiveVirus.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

class World
{

private:
	int deaths;
	int survivors;
	int infected;
public:
	vector<Citizen* > population;
	void setPopulation();
	void displayPopulation();
	void makeBaby();
	void infectHuman();
	void killZombie();
	World ();
	World(int deaths , int survivors, int infected);
	void getDeaths();
	void getSurvivors();
	void getInfected();
	void makeDiagram(int populaton, int deaths, int active_cases);
	~World();

};

