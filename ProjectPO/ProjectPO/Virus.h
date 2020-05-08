#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Virus {
	int attack;
protected:
    string virusName;
	int mutation;
	bool iscurable;
	int death;
	int infected;
public:
	~Virus();
	Virus(int, int ,int ,bool ,int ,string );
	int getAttack();
	int getMutation();
	int getDeathNumb();
	int getInfectedNumb();
	string setVirusName();
	virtual int ability() = 0;
};

