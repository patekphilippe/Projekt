#include "Window.h"
#include "Citizen.h"
#include "Soldier.h"
#include "MedicalStaff.h"
#include "Zombie.h"
#include "World.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <windows.h>
#include <string.h>
using namespace std;

#define ARROW_UP 72
#define ARROW_DOWN 80
#define ENTER 13

Window::Window() {
	this->firstmenu[0] = "Open Simulation";
	this->firstmenu[1] = "Close Simulation";
	this->secondmenu[0] = "Repeat Simulation";
	this->secondmenu[1] = "Show statistics";
	this->secondmenu[2] = "Close Simulation";
	this->tabmenu[0] = 1;
	this->tabmenu[1] = 0;
	this->tabmenu[2] = 0;
	this->choosemenu = 1;
	this->menuposition = 0;
	this->menusize = 1;
	this->key = 0;
	this->exit = 1;
};

int Window::setMenu() {
	displayMenu();
	while (this->exit == 1) {
		switch ((key = _getch()))
		{
		case ARROW_UP:
			if (this->menuposition > 0) {
				this->tabmenu[menuposition] = 0;
				this->menuposition--;
				this->tabmenu[menuposition] = 1;
				system("cls");

				displayMenu();
			}
			break;
		case ARROW_DOWN:
			if (this->menuposition < menusize) {
				this->tabmenu[menuposition] = 0;
				this->menuposition++;
				this->tabmenu[menuposition] = 1;
				system("cls");
				
				displayMenu();
			}
			break;

		case ENTER:
			for(int i = 0; i < this->menusize; i++)
				if (this->tabmenu[i] == 1) {
					if (this->choosemenu == 1) {
						if (this->firstmenu[i] == "Open Simulation")
							openSimulation();
						else if (this->firstmenu[i] == "Close Simulation")
							this->exit = 0;
					}
					else {
						if (this->secondmenu[i] == "Repeat Simulation") 
							openSimulation();
						else if (this->secondmenu[i] == "Close Simulation")
							this->exit = 0;

						else if (this->secondmenu[i] == "Show statistics")
							showStatistics();
					}
				}
			this->exit = 0;
			break;

		default:
			break;
		}
	}
	return 0;
}

void Window::displayMenu() {
	if(this->choosemenu == 1)
		for (int i = 0; i <= this->menusize; i++)
		{
			cout << this->firstmenu[i];
			if (tabmenu[i] == 1)
				cout << '<';
			cout << '\n';
		}
	else
		for (int i = 0; i <= this->menusize; i++)
		{
			cout << this->secondmenu[i];
			if (tabmenu[i] == 1)
				cout << '<';
			cout << '\n';
		}
}

void Window::openSimulation() {

	system("cls");
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
		cout << "Infected: " << world.infectedAmount << endl;
		cout << "Zombies: " << world.zombiesAmount << endl;
		cout << "Medical Staf:" << world.medicalStaffAmount << endl;
		cout << "Soldiers: " << world.soldierAmount << endl;
		cout << "Citizen: " << world.citizenAmount << endl;
		cout << endl;
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
		//cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";

	}
	system("cls");
	this->menusize = 2;
	this->choosemenu = 2;
	setMenu();
}



void Window::showStatistics() {
	system("cls");
	for (int i = 0; i < 12; i++) {
		cout << "\n----------------------------------\n";
		cout << "Month " << i + 1 << endl;
		cout << "Citizen: " << world.citizenStatistic[i] << endl;
		cout << "Death: " << world.deathStatistic[i] << endl;
		cout << "Infected: " << world.infectedStatistic[i] << endl;
		cout << "Medical Staff: " << world.medicalStaffStatistic[i] << endl;
		cout << "Zombie: " << world.zombieStatistic[i] << endl;
		cout << "Soldier : " << world.soldierStatistic[i] << endl;
		cout << "\n----------------------------------\n";
		Sleep(1000);
		system("cls");
	}
	system("cls");
	setMenu();
}