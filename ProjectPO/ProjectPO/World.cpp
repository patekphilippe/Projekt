#include "World.h"
void World::setPopulation() {
	for (int i = 0; i < 100; i++) {
		int ID = rand() % 4;
		if (ID == 0) population.push_back(new Citizen((rand() % 100), rand() % 100, "Citizen", rand() % 100, rand() % 2));
		if (ID == 1) population.push_back(new Soldier((rand() % 100), rand() % 100, "Soldier", rand() % 100));
		if (ID == 2) population.push_back(new MedicalStaff((rand() % 100), rand() % 100, "MedicalStaff", rand() % 100));
		if (ID == 3) {
			population.push_back(new Zombie(rand() % 100, "Zombie"));
		}
	}
}

void World::displayPopulation() {
	for (int i = 0; i < population.size(); i++) {
		cout << population[i]->getName() << " " << population[i]->getHealth() << " " << population[i]->getImmune() << " " <<population[i]->getAge() << endl;
	}
}

void World::makeBaby() {
	for (int i = 0; i < population.size(); i++) {
		if (population[i]->isFertile() && population[i]->getAge() >= 18) {
			for (int y = 0; y < population.size(); y++) {
				if (i != y && population[y]->isFertile() && population[i]->getAge() >= 18)
				{
					int chanceToMakeBaby = rand() % 10;
					if (chanceToMakeBaby >= 9) {
						population.push_back(new Citizen(1, rand() % 100, "Citizen", rand() % 100, rand() % 2));
						i = i + 1;
						break;
					}
				}
			}
		}
	}
}

void World::infectHuman() {
	for (int i = 0; i < population.size(); i++) {
		if (population[i]->getName() == "Zombie") {
			for (int y = 0; y < population.size(); y++) {
				if (population[y]->getName() == "Citizen") {
					int chanceofBeingTurned = rand() % 100;
					if (chanceofBeingTurned > 50) {
						population.erase(population.begin() + y);
						population.push_back(new Zombie(rand() % 100, "Zombie"));
						i = i + 1;
						break;
					}
				}
			}
		}
	}
}

void World::killZombie() {
	for (int i = 0; i < population.size(); i++) {
		if (population[i]->getName() == "Soldier") {
			for (int y = 0; y < population.size(); y++) {
				if (population[y]->getName() == "Zombie") {
					int chanceofBeingSucces = rand() % 100;
					if (chanceofBeingSucces > 50) {
						population.erase(population.begin() + y);
						i = i + 1;
						break;
					}
				}
			}
		}
	}
}
