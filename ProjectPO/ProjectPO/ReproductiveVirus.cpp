#include "ReproductiveVirus.h"
 

ReproductiveVirus::ReproductiveVirus (int infertinity, int infected, string virusName) {
	this->iscurable = true;
	this->death = 0;
	this->infected = infected;
	this->mutation = 2;
	this->virusName = virusName;
	this->infertility = infertinity;
}

int ReproductiveVirus::ability() {
	srand(time(NULL));
	infertility = -(rand() % 10);
	return infertility;
}
ReproductiveVirus::~ReproductiveVirus(){}