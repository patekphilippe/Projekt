#include "World.h"
World::World() {
	this->deathAmount = 0;
	this->citizenAmount = 0;
	this->medicalStaffAmount = 0;
	this->soldierAmount = 0;
	this->zombiesAmount = 0;
	this->infectedAmount = 0;
};

void World::setRegions() {
	regions.push_back(new Region("Africa", rand() % 20 + 1, rand() % 100 + 1));
	regions.push_back(new Region("North America", rand() % 20 + 1, rand() % 100 + 1));
	regions.push_back(new Region("South Africa", rand() % 100 + 1, rand() % 100 + 1));
	regions.push_back(new Region("Asia", rand() % 100 + 1, rand() % 100 + 1));
	//regions.push_back(new Region("Europe", rand() % 100 + 1, rand() % 100 + 1));
	//regions.push_back(new Region("Australia", rand() % 100 + 1, rand() % 100 + 1));
	//regions.push_back(new Region("Antarctica", rand() % 100 + 1, rand() % 100 + 1));

	//ZALUDNIANIE REGIONOW
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < regions[i]->getPopulationAmount(); y++) {
			int randHuman = rand() % (regions[i]->getEconomics());
			if (randHuman >= 15) {
				if (rand() % 2) {
					regions[i]->population.push_back(new Soldier(rand() % 100 + 1, 0, "Soldier", rand() % 50 + 50, rand () % 50));
					this->soldierAmount++;
				}
				else {
					regions[i]->population.push_back(new MedicalStaff(rand() % 100 + 1, 0, "Medical Staff", rand() % 20 + 50));
					this->medicalStaffAmount++;
				}
			}
			else {
				regions[i]->population.push_back(new Citizen(rand() % 100 + 1, 0, "Citizen", rand() % 20 + 50, rand() % 2));
				this->citizenAmount++;
			}
		}
	}
	immune();
}
int World::immune() {

	for (int i = 0; i < regions.size(); i++) {
		for (int y = 0; y < regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->getAge() < 10) {
				this->regions[i]->population[y]->setImmune(100);
			}
			else if (this->regions[i]->population[y]->getAge() >= 10 && this->regions[i]->population[y]->getAge() < 20) {
				this->regions[i]->population[y]->setImmune(90);
			}
			else if (this->regions[i]->population[y]->getAge() >= 20 && this->regions[i]->population[y]->getAge() < 30) {
				this->regions[i]->population[y]->setImmune(80);
			}
			else if (this->regions[i]->population[y]->getAge() >= 30 && this->regions[i]->population[y]->getAge() < 40) {
				this->regions[i]->population[y]->setImmune(70);
			}
			else if (this->regions[i]->population[y]->getAge() >= 40 && this->regions[i]->population[y]->getAge() < 50) {
				this->regions[i]->population[y]->setImmune(60);
			}
			else if (this->regions[i]->population[y]->getAge() >= 50 && this->regions[i]->population[y]->getAge() < 60) {
				this->regions[i]->population[y]->setImmune(50);

			}
			else if (this->regions[i]->population[y]->getAge() >= 70 && this->regions[i]->population[y]->getAge() < 80) {
				this->regions[i]->population[y]->setImmune(40);

            }
			else {
				this->regions[i]->population[y]->setImmune(30);
			}
			
		}
		
	}
	return 0;
}

void World::setVirus() {
	this->viruses.push_back(new ReproductiveVirus("Reproductive Virus", 0, 1));
	this->viruses.push_back(new NerveVirus("Nerve Virus", 0, 1));
	this->viruses.push_back(new RespiratoryVirus("Respiratory Virus", 0, 1));
}

void World::beginInfection() {
	int pickVirus = rand() % 3;
	int pickRegion = rand() % (this->regions.size());
	int pickHuman = rand() % (this->regions[pickRegion]->population.size());
	this->regions[pickRegion]->population[pickHuman]->affect(viruses[pickVirus]);
	this->infectedAmount++;
}


void World::displayRegions() {
	for (int i = 0; i < this->regions.size(); i++) {
		cout << "REGION NAME: " << this->regions[i]->getNameOfRegion() << endl;
		for (int y = 0; y < regions[i]->population.size(); y++)
		{
			cout << regions[i]->population[y]->getName() << " AGE:" <<
				regions[i]->population[y]->getAge() << " HP:" <<
				regions[i]->population[y]->getHealth() << " IMM:" <<
				regions[i]->population[y]->getImmune() << " FR:" <<
				regions[i]->population[y]->isFertile() << " IF:" <<
				regions[i]->population[y]->getIsInfected() << " IF_N:" <<
				regions[i]->population[y]->getInfectionName() << endl;
		}
		cout << "------------------------------------------" << endl;
	}
}

void World::makeBaby() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->isFertile() && this->regions[i]->population[y]->getAge() >= 18) {
				for (int z = 0; z < regions[i]->population.size(); z++) {
					if (y != z && this->regions[i]->population[z]->isFertile() && this->regions[i]->population[y]->getAge() >= 18) {
						int chanceToMakeBaby = rand() % 10;
						if (chanceToMakeBaby >= 9) {
							this->regions[i]->population.push_back(new Citizen(1, rand() % 100, "Citizen", rand() % 25, rand() % 2));
							this->citizenAmount++;
							y = y + 1;
							break;
						}
					}
				}
			}
		}
	}
}

void World::transmitVirus() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->getIsInfected()) {
				for (int z = 0; z < this->regions[i]->population.size(); z++) {
					if (y != z && !this->regions[i]->population[z]->getIsInfected()) {
						this->regions[i]->population[z]->affect(this->viruses[this->regions[i]->population[y]->getVirusId()]);
						this->infectedAmount++;
						//z++;
						//break;
					}
				}
			}
		}
	}
}

void World::travel() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if(this->regions[i]->population[y]->getName() == "Citizen" || this->regions[i]->population[y]->getName() == "Zombie")
			if (this->regions[i]->getEconomics() >= 10) {
				if (rand() % 2) {
					this->regions[rand() % this->regions.size()]->population.push_back(this->regions[i]->population[y]);
					this->regions[i]->population.erase(this->regions[i]->population.begin() + y);
					y++;
					break;
				}
			}
		}
	}
}

void World::turnToZombie() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->getInfectionName() == "Nerve Virus") {
				if (this->regions[i]->population[y]->getName() == "Medical Staff") this->medicalStaffAmount--;
				else if (this->regions[i]->population[y]->getName() == "Soldier") this->soldierAmount--;
				else if (this->regions[i]->population[y]->getName() == "Citizen") this->citizenAmount--;
				this->regions[i]->population.erase(this->regions[i]->population.begin() + y);
				this->regions[i]->population.push_back(new Zombie(rand() % 100, "Zombie", rand () % 10));
				this->zombiesAmount++;
			}
		}
	}
}

void World::impairHumanity() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->getIsInfected() && this->regions[i]->population[y]->getName() != "Zombie") {
				int damageAmount = rand() % 50 - (this->regions[i]->population[y]->getImmune()) / 4;
				if (damageAmount > 0) this->regions[i]->population[y]->impairHealth(damageAmount);
				if (this->regions[i]->population[y]->getHealth() < 0) {
					if (this->regions[i]->population[y]->getName() == "Medical Staff") this->medicalStaffAmount--;
					else if (this->regions[i]->population[y]->getName() == "Soldier") this->soldierAmount--;
					else if(this->regions[i]->population[y]->getName() == "Citizen") this->citizenAmount--;
					this->regions[i]->population.erase(this->regions[i]->population.begin() + y);
					this->infectedAmount--;
					this->deathAmount++;
				}
			}
		}
	}
}

void World::purgeZombies() {
	for (int i = 0; i < this->regions.size(); i++) {
		for (int y = 0; y < this->regions[i]->population.size(); y++) {
			if (this->regions[i]->population[y]->getName() == "Soldier") {
				for (int z = 0; z < regions[i]->population.size(); z++) {
					if (y != z && this->regions[i]->population[z]->getName() == "Zombie") {
						while (this->regions[i]->population[y]->getHealth() > 0 && this->regions[i]->population[z]->getHealth() > 0) {
							this->regions[i]->population[z]->impairHealth(this->regions[i]->population[y]->getDamage());
							if (this->regions[i]->population[z]->getHealth() > 0) {
								this->regions[i]->population[y]->impairHealth(this->regions[i]->population[z]->getDamage());
								if (this->regions[i]->population[y]->getHealth() < 0) {
									this->regions[i]->population.erase(this->regions[i]->population.begin() + y);
									this->soldierAmount--;
									this->infectedAmount--;
									this->deathAmount++;
									break;
								}
							}
							else {
								this->regions[i]->population.erase(this->regions[i]->population.begin() + z);
								this->zombiesAmount--;
								this->infectedAmount--;
								break;
							}
					}

					}
				}
			}
		}
	}
}

void World::healInfected() {
	for (int i = 0; i < regions.size(); i++) {
		for (int y = 0; y < regions[i]->population.size(); y++) {
			if (regions[i]->population[y]->getName() == "Medical Staff") {
				for (int z = 0; z < regions[i]->population.size(); z++) {
					if (y != z && regions[i]->population[z]->getIsInfected() && regions[i]->population[z]->getName() != "Zombie") {
						int healAmount = rand() % regions[i]->population[z]->getImmune() - this->viruses[this->regions[i]->population[z]->getVirusId()]->getMutation();
						if(healAmount > 0) this->regions[i]->population[z]->bandageWounds(healAmount);
						//if (rand() % 2) {
							if (regions[i]->population[z]->getInfectionName() == "Nerve Virus") {
								regions[i]->population[z]->setInfectionName("");
								this->infectedAmount--;
							}
							else if (regions[i]->population[z]->getInfectionName() == "Reproductive Virus") {
								regions[i]->population[z]->setInfectionName("");
								regions[i]->population[z]->setFertile(1);
								this->infectedAmount--;
							}
							else if (regions[i]->population[z]->getInfectionName() == "Respiratory Virus") {
								regions[i]->population[z]->setInfectionName("");
								regions[i]->population[z]->setImmune(80+rand()%10);
								this->infectedAmount--;
							}
							regions[i]->population[z]->setisInfected(0);
						//}
					}
					y++;
					break;
				}
			}
		}
	}
}


void World::getDeaths()
{
}

void World::getSurvivors()
{
}

void World::getInfected()
{
}

void World::makeDiagram(int populaton , int deaths, int active_cases)
{
	
}

World::~World()
{

}
