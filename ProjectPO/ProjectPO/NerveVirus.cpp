#include "NerveVirus.h"

NerveVirus::NerveVirus(string virusName, bool iscurable, int mutation) {
	this->death = 0;
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int NerveVirus::ability() {
	int turnToZombie = rand() % 2;
	return turnToZombie;
}

NerveVirus::~NerveVirus() {};