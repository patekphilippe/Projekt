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

bool RespiratoryVirus::kill() {
	int n = rand() % 10;
	if (n <= 6) {
		return 0;
	}
	else
		return this->death;
}

RespiratoryVirus::~RespiratoryVirus(){}