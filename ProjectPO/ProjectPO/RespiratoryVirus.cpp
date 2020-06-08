#include "RespiratoryVirus.h"

RespiratoryVirus::RespiratoryVirus(string virusName, bool iscurable, int mutation) {
	this->death = 0;
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int RespiratoryVirus::ability() {
	int lowerImmune = rand() % 10;
	return -lowerImmune;
}

RespiratoryVirus::~RespiratoryVirus(){}