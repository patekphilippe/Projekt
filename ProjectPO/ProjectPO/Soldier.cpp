#include "Soldier.h"
Soldier::Soldier() {};
Soldier::Soldier(int age, int immune, string profession, int health) {
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->infection = false;
	this->health = health;
	this->fertile = 0;
}

int Soldier::ability() {
	cout << "dealing damage";
	return -(rand() % 10);
}