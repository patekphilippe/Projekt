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
///This is the most important class in the project, all mechanics take place in this class.
///
///World contains : inhabitants, virus and regions.
///Simulation of virus which infects people in this world last one year.
///Each month different events take place in a specific order.
///In the beggining of simulation one of the inhabitant is infected - in
///a random way, or specified, depending which option user chose.
///Then humanity procreates, which increases amount of inhabitans of regions.
///After this, virus is spreaded all around the world. Every human
///has a chance to infect another from his region.
///Next event is travelling - people can make virus even more
///lethal by infecting people from another region. (we assume that they are irresponsible)
///Then ones who were infected with Nerve Virus might turn into hostile zombies,
///and every sick human have their life decrased.
///In the end of month, soldiers are trying to eliminate zombies and 
///medical staff tries to sustain humanity by healing wounded.
///Then the cycle repeats.
///Moreover data from simulation is saved in array, every index + 1
///corresponds to the month, for example deathStatistic[0] - statics of deaths from January.
///That statistics can be saved in txt file.
class World
{
public:
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
	///Contains all three viruses parameters.
	std::vector<Virus* > viruses;
	///Contains all regions from which world is created
	std::vector<Region* > regions;
	///Function that defines procreating event - every human have a chance
	///(if is > 18 years old) to make baby with another. If
	///he succeds he cant do this again in this month.
	void makeBaby();
	///Function that sets region economics, name and amount of population.
	/// <param name="isParametrised"></param> parameter used to check if user parametrised manually regions.
	void setRegions(int);
	///Function that displays current state of regions. It also shows how objects migrate between countries.
	void displayRegions();
	///Function of simulation that chooses one human and infects it - what begins simulation.
	/// <param name="virusID"></param> parameter used to check if user parametrised manually regions. 
	void beginInfection(int);
	///Function of simulation that transmits virus - every object has a chance to infect other from his inhabited region.
	void transmitVirus();
	///Function of simulation that starts event of travelling. Objects migrate between regions, spreading virus all around the word.
	void travel();
	///Function of simulation that turns people (infected by nerve virus) into zombies
	void turnToZombie();
	///Function of simulation that substract certain amount of health from human
	void impairHumanity();
	///Function of simulation that forces soldiers to fight with zombies.
	void purgeZombies();
	///Function of simulation that forces medical staff to heal wounded.
	void healInfected();
	void setVirus();
	///Function that allows user to parametrise simulation.
	int parametriseSimulation();
	World();
};

