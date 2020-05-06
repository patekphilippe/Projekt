#pragma once
#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;
class Citizen
{
protected:
	int age;
	int health;
	int immune;
	bool infection;
	bool fertile;
	string profession;
public:
	Citizen();
	Citizen(int age, int immune, string profession, int health, bool fertile);
	int getAge();
	int getHealth();
	string getName();
	int getImmune();
	bool isInfected();
	bool isFertile();
	virtual int ability();
};

