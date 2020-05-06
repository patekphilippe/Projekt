#pragma once
#include<string>
using namespace std;

class Region
{
	string climate;
	float economics;
	string season;
	int population;
	string nameOfRegion;

public:

	Region(string, string, int, float);
	~Region() = default;

	
	string getClimate();
	float getEconomics();
	string getSeason();
	int getPopulation();
	string getNameOfRegion();
	void update();
};

