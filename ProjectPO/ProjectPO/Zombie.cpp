#include "Zombie.h"
Zombie::Zombie() {};
Zombie::Zombie(int health, string profession) {
	this->immune = 0;
	this->profession = profession;
	this->infection = true;
	this->health = health;
	this->age = 0;
}

int Zombie::ability() {
	int x = rand() % 10;
	cout << "zombie";
	if (x > 6) return 1;
	else return 0;
}