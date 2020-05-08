#include "RespiratoryVirus.h"

RespiratoryVirus::RespiratoryVirus(int death, int infected, string virusName) {
	this->iscurable = true;
	this->death = death;
	this->infected = infected;
	this->mutation = 1;
	this->virusName =virusName;
}

int RespiratoryVirus::ability() {
	 srand(time(NULL));
	 int n = rand() % 150;
	 infected += n;
	 return this->infected;
}

bool RespiratoryVirus::kill() {
	srand(time(NULL));
	int n = rand() % 10;
	if (n <= 6) {
		return 0;
	}
	else
		return this->death;
}

RespiratoryVirus::~RespiratoryVirus(){}