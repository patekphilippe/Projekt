#include "Zombie.h"
using namespace std;
Zombie::Zombie() {};
Zombie::Zombie(int health, string profession, int damage) {
	this->damage = damage;
	this->immune = 0;
	this->profession = profession;
	this->health = health;
	this->age = 0;
	this->isInfected = 1;
	this->virusID = 1;
	this->fertile = 0;
}

