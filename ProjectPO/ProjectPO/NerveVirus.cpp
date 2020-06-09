#include "NerveVirus.h"
using namespace std;
NerveVirus::NerveVirus(string virusName, bool iscurable, int mutation) {
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int NerveVirus::ability() {
	int turnToZombie = rand() % 2;
	return turnToZombie;
}