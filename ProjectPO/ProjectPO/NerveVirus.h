#pragma once
#include "Virus.h"

class NerveVirus :public Virus {
public:
	~NerveVirus();
	NerveVirus(int infected,int zombie,  string virusName);
	int ability();
private:
	int zombie;
};
