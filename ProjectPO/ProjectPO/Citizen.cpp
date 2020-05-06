#include "Citizen.h"

Citizen::Citizen(){}

Citizen::Citizen(int age, int immune, string profession, int health, bool fertile) {
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->infection = false;
	this->health = health;
	this->fertile = fertile;
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

bool Citizen::isInfected() {
	return this->infection;
}

int Citizen::ability() {
	return 0;
}

string Citizen::getName() {
	return this->profession;
}

bool Citizen::isFertile() {
	return this->fertile;
}