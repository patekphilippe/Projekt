#pragma once
#include "Virus.h"


class RespiratoryVirus : public Virus {
public:
	~RespiratoryVirus();
	RespiratoryVirus(string, bool, int);
	int ability();
	bool kill();
};
