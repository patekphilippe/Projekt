#pragma once
#include<string>
#include<vector>
#include"Citizen.h"

using namespace std;

class Region
{
	string climate;
	int economics;
	string season;
	string nameOfRegion;
	int population_amount;

public:
	
	Region(string, int, int);
	Region();
	
	void update();
	
	vector<Citizen*> population;
	string getClimate();
	int getEconomics();
	string getSeason();
	int getPopulationAmount();
	string getNameOfRegion();
	
};

