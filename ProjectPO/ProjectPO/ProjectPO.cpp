<<<<<<< HEAD
// ProjectPO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Citizen.h"
#include "Soldier.h"
#include "MedicalStaff.h"
#include "Zombie.h"
#include "World.h"
=======
>>>>>>> e1fa80ab151c2d067e2a84dfc388adaf8a50acfc
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

int main()
{
	World world;
	srand(time(NULL));
	
	world.setPopulation();
	cout << "-----------------------------------------------------" << endl;
	world.displayPopulation();
	world.makeBaby();
	cout << "-----------------------------------------------------" << endl;
	world.displayPopulation();
	world.infectHuman();
	cout << "-----------------------------------------------------" << endl;
	world.displayPopulation();
	world.killZombie();
	cout << "-----------------------------------------------------" << endl;
	world.displayPopulation();
	cout << endl << endl;
	
	
}
