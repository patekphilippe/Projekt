#include "Virus.h"
using namespace std;
Virus::Virus() {};

Virus::Virus(string virusName, bool iscurable, int mutation) {
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int Virus::getMutation() {
	return this->mutation;
}

string Virus::getVirusName() {
	return this->virusName;
}

string Virus::setVirusName() {
	return this->virusName;    
}

int Virus::ability() {
	return 0;
}

