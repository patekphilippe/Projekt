#include "Virus.h"
Virus::Virus() {};

Virus::Virus(string virusName, bool iscurable, int mutation) {
	this->death = 0;
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int Virus::getAttack() {
	return this->attack;
}
int Virus::getMutation() {
	return this->mutation;
}

int Virus::getDeathNumb() {
	return this->death;
}

int Virus::getInfectedNumb() {
	return this->infected;
}

string Virus::getVirusName() {
	return this->virusName;
}

string Virus::setVirusName() {
	return this->virusName;    
}

int Virus::ability() {
	return 0;
}

Virus::~Virus() {};
