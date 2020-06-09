#include "MedicalStaff.h"
using namespace std;
MedicalStaff::MedicalStaff(int age, int immune, string profession, int health) {
	this->age = age;
	this->immune = immune;
	this->profession = profession;
	this->isInfected = false;
	this->health = health;
	this->fertile = 0;
}
int MedicalStaff::ability() {
	return rand() % 10;
}