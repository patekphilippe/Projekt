#pragma once
#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
#include "Virus.h"
using namespace std;
class Citizen
{
protected:
	int damage;
	int virusID;
	int age;
	int health;
	int immune;
	bool isInfected;
	bool fertile;
	string profession;
	string infectionName;
public:
	Citizen();
	Citizen(int age, int immune, string profession, int health, bool fertile);

	int getAge();
	int getHealth();
	string getName();
	string getInfectionName();
	int getImmune();
	int getVirusId();
	int getDamage();
	bool getIsInfected();
	void setisInfected(bool);
	void setFertile(bool);
	void setImmune(int);
	void setInfectionName(string);
	void impairHealth(int);
	void bandageWounds(int);
	void affect(Virus*);
	bool isFertile();
	virtual int ability();
};

