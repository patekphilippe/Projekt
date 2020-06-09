#include "ReproductiveVirus.h"
using namespace std;
ReproductiveVirus::ReproductiveVirus (string virusName, bool iscurable, int mutation) {
	this->virusName = virusName;
	this->iscurable = iscurable;
	this->mutation = mutation;
}

int ReproductiveVirus::ability() {
	return 0;
}
