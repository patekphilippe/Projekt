#pragma once
#include "Virus.h"


class ReproductiveVirus :public Virus {
	int infertility;
public:
	~ReproductiveVirus();
	ReproductiveVirus(string, bool, int);
    int ability();
};
