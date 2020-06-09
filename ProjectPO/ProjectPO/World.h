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
#include <string>
#include <ctime>
#include <vector>

class World
{
public:
	int amountOfRegions;
	int deathStatistic[12];
	int citizenStatistic[12];
	int medicalStaffStatistic[12];
	int zombieStatistic[12];
	int infectedStatistic[12];
	int soldierStatistic[12];
	int deathAmount;
	int citizenAmount;
	int medicalStaffAmount;
	int soldierAmount;
	int zombiesAmount;
	int infectedAmount;
	std::vector<Virus* > viruses;
	std::vector<Region* > regions;
	std::vector<Citizen* > population;
	void makeBaby();
	void setRegions(int);
	void displayRegions();
	void beginInfection(int);
	void transmitVirus();
	void travel();
	void turnToZombie();
	void impairHumanity();
	void purgeZombies();
	void healInfected();
	void setVirus();
	int parametriseSimulation();
	World();
};

