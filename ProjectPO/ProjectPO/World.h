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

public:
	int deathStatistic[12];
	int citizenStatistic[12];
	int medicalStaffStatistic[12];
	int zombieStatistic[12];
	int infectedStatistic[12];
	int soldierStatistic[12];
	vector<Virus* > viruses;
	vector<Region* > regions;
	vector<Citizen* > population;
	void makeBaby();
	void infectHuman();
	void killZombie();
	void setRegions();
	void displayRegions();
	void beginInfection();
	void transmitVirus();
	void travel();
	void turnToZombie();
	void impairHumanity();
	void purgeZombies();
	void healInfected();
	int immune();
	World ();
	World(int deaths , int survivors, int infected);
	void getDeaths();
	void getSurvivors();
	void getInfected();
	void makeDiagram(int populaton, int deaths, int active_cases);
	void setVirus();
	int deathAmount;
	int citizenAmount;
	int medicalStaffAmount;
	int soldierAmount;
	int zombiesAmount;
	int infectedAmount;
	~World();

};

