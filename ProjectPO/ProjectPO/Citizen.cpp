#include "Citizen.h"

Citizen::Citizen(){}

Citizen::Citizen(int age, int immune, string profession, int health, bool fertile) {
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->isInfected = false;
	this->health = health;
	this->fertile = fertile;
	this->damage = 0;
}

int Citizen::getAge() {
	return this->age;
}

int Citizen::getImmune() {
	return this->immune;
}

int Citizen::getHealth() {
	return this->health;
}

bool Citizen::getIsInfected() {
	return this->isInfected;
}

int Citizen::ability() {
	return 0;
}

int Citizen::getVirusId() {
	return this->virusID;
}

int Citizen::getDamage() {
	return this->damage;
}
string Citizen::getName() {
	return this->profession;
}

string Citizen::getInfectionName() {
	return this->infectionName;
}

bool Citizen::isFertile() {
	return this->fertile;
}

void Citizen::setFertile(bool fertile) {
	this->fertile = fertile;
}

void Citizen::setImmune(int immune) {
	this->immune = immune;
}

void Citizen::setInfectionName(string infectionName) {
	this->infectionName = infectionName;
}

void Citizen::setisInfected(bool isInfected) {
	this->isInfected = isInfected;
}

void Citizen::impairHealth(int health) {
	this->health -= health;
}
void Citizen::affect(Virus* virus) {
	if (virus->getVirusName() == "Nerve Virus") {
		this->infectionName = virus->getVirusName();
		this->isInfected = 1;
		this->virusID = 1;
		return;
	}
	if (virus->getVirusName() == "Respiratory Virus") {
		this->infectionName = virus->getVirusName();
		this->immune -= virus->ability();
		this->isInfected = 1;
		this->virusID = 2;
		return;
	}
	if (virus->getVirusName() == "Reproductive Virus") {
		this->infectionName = virus->getVirusName();
		this->fertile = virus->ability();
		this->isInfected = 1;
		this->virusID = 0;
		return;
	}
}

void Citizen::bandageWounds(int health) {
	this->health += health;
}