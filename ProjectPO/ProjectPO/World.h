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
///In the beggining of the simulation one of the inhabitant is infected in
///a random  or specified way, depending on which option user chose.
///Then humanity procreates, what increases amount of inhabitants of regions.
///After this, virus is spreaded all around the world. Every human
///has a chance to infect another from his region.
///While travelling  people can make virus  more
///lethal by infecting people from another regions. 
///Then those who were infected by Nerve Virus may turn into zombies,
///and their immune decreases.
///In the end of month, soldiers are trying to eliminate zombies and 
///medical staff is trying to sustain humanity by healing wounded.
///Then the cycle repeats.
///Moreover data from simulation is saved in array, every index + 1
///corresponds to the certain month, for example deathStatistic[0] - statics of human's deaths from January.
///User can save statistics in txt file.
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
	///Function that defines propagation  - every human have a chance
	///(if he is > 18 years old) to make a baby . If
	///he succeed he can't do this again in this month.
	void makeBaby();
	///Function that sets region's economy, name of the region and amount of population.
	/// <param name="isParametrised"></param> parameter used to check if user parametrised manually regions.
	void setRegions(int);
	///Function that displays current state of regions. It also shows how humans migrate between countries.
	///
	///IMM stands for immunity
	///FR stands for fertility
	///IF_N shows 1 if object is infected 0 if not

	void displayRegions();
	///Function of simulation that chooses one human and infects it - that starts simulation.
	/// <param name="virusID"></param> parameter used to check if user parametrised manually regions. 
	void beginInfection(int);
	///Function of simulation that transmits virus - every object has a chance to infect other from his inhabited region.
	void transmitVirus();
	///Function of simulation that starts travelling. Objects migrate between regions, spreading virus all around the word.
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

