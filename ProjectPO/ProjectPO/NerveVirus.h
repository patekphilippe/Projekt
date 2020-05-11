#pragma once
#include "Virus.h"

class NerveVirus :public Virus {
public:
	~NerveVirus();
	NerveVirus(string, bool, int);
	int ability();
private:
	int zombie;
};
