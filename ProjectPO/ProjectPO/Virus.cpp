#include "Virus.h"

Virus::Virus(int attack, int mutation, int death, bool iscurable, int infected, string virusName) {
	this->attack = attack;
	this->mutation = mutation;
	this->iscurable = iscurable;
	this->death = death;
	this->virusName = virusName;
}

int Virus::getAttack() {
	return this->attack;
}

int Virus::getMutation() {  
	srand(time(NULL));         
	int mutation = rand() % 2 +1;    
	return this->mutation;
}

int Virus::getDeathNumb() {
	return this->death;
}

int Virus::getInfectedNumb() {
	return this->infected;
}

string Virus::setVirusName() {
	return this->virusName;    
}

int Virus::ability() {
	return 0;
}

Virus::~Virus() {};
