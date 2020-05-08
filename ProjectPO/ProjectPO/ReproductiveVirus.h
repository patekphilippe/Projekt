#pragma once
#include "Virus.h"


class ReproductiveVirus :public Virus {
	int infertility;
public:
	~ReproductiveVirus();
	ReproductiveVirus(int ,int, string );
    int ability();
};
