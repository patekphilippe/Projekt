#include "Soldier.h"
using namespace std;
Soldier::Soldier(int age, int immune, string profession, int health, int damage) {
	this->damage = damage;
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->isInfected = false;
	this->health = health;
	this->fertile = 0;
}

int Soldier::ability() {
	return -(rand() % 10);
}
