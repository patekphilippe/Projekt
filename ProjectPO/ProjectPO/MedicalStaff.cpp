#include "MedicalStaff.h"
MedicalStaff::MedicalStaff() {};
MedicalStaff::MedicalStaff(int age, int immune, string profession, int health) {
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->infection = false;
	this->health = health;
	this->fertile = 0;
}
int MedicalStaff::ability() {
	cout << "healing";
	return rand() % 10;
}