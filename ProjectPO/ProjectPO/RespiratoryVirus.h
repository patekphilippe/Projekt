#pragma once
#include "Virus.h"


class RespiratoryVirus : public Virus {
public:
	~RespiratoryVirus();
	RespiratoryVirus(int, int, string);
	int ability();
	bool kill();
};
