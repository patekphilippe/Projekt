#include "NerveVirus.h"

NerveVirus::NerveVirus(int infected,int zombie, string virusName) {
	this->iscurable = true;
	this->death = 0; 
	this->infected = infected;
	this->mutation = 3;
	this->virusName = virusName;
	this->zombie = zombie;
}

int NerveVirus::ability() {
	return this->zombie;
}
NerveVirus::~NerveVirus(){}