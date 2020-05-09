#pragma once
#include<string>
#include<vector>
#include"Citizen.h"

using namespace std;

class Region
{
	string climate;
	float economics;
	string season;
	string nameOfRegion;
	

public:
	
	Region(string, string, int, float);
	Region();
	~Region() = default;
	void update();
	
	vector<Citizen*> population;
	string getClimate();
	float getEconomics();
	string getSeason();
	int getPopulation();
	string getNameOfRegion(int);
	
};

