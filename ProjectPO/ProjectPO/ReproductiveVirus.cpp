#include "ReproductiveVirus.h"
 

ReproductiveVirus::ReproductiveVirus (string virusName, bool iscurable, int mutation) {
	this->death = 0;
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int ReproductiveVirus::ability() {
	return 0;
}
ReproductiveVirus::~ReproductiveVirus(){}