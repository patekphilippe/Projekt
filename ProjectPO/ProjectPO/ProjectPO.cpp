
// ProjectPO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Citizen.h"
#include "Soldier.h"
#include "MedicalStaff.h"
#include "Zombie.h"
#include "World.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <windows.h>
int main()
{
	World world;
	srand(time(NULL));
	world.setRegions();
	world.setVirus();
	world.beginInfection();

	for (int i = 0; i < 12; i++) {
		world.citizenStatistic[i] = world.citizenAmount;
		world.deathStatistic[i] = world.deathAmount;
		world.infectedStatistic[i] = world.infectedAmount;
		world.medicalStaffStatistic[i] = world.medicalStaffAmount;
		world.zombieStatistic[i] = world.zombiesAmount;
		world.soldierStatistic[i] = world.soldierAmount;
		/*cout << "Infected: " << world.infectedAmount << endl;
		cout << "Zombies: " << world.zombiesAmount << endl;
		cout << "Medical Staf:" << world.medicalStaffAmount << endl;
		cout << "Soldiers: " << world.soldierAmount << endl;
		cout << "Citizen: " << world.citizenAmount << endl;
		cout << endl;*/
		system("cls");
		world.displayRegions();
		world.turnToZombie();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.purgeZombies();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.impairHumanity();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.travel();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.transmitVirus();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.travel();

		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.healInfected();
		
		Sleep(2000);
		system("cls");
		world.displayRegions();
		world.makeBaby();
		//cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";; 
		
	}
	for (int i = 0; i < 12; i++) {
		cout << "\n----------------------------------\n";
		cout << "Month " << i + 1 << endl;
		cout << "Citizen: " << world.citizenStatistic[i] << endl;
		cout << "Death:: " << world.deathStatistic[i] << endl;
		cout << "Infected " << world.infectedStatistic[i] << endl;
		cout << "Medical Staff: " << world.medicalStaffStatistic[i] << endl;
		cout << "Zombie: " << world.zombieStatistic[i] << endl;
		cout << "Soldier : " << world.soldierStatistic[i] << endl;
		cout << "\n----------------------------------\n";
		Sleep(1000);
		system("cls");
	}
}
