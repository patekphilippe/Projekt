#include "RespiratoryVirus.h"
using namespace std;
RespiratoryVirus::RespiratoryVirus(string virusName, bool iscurable, int mutation) {
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int RespiratoryVirus::ability() {
	int lowerImmune = rand() % 10;
	return -lowerImmune;
}
