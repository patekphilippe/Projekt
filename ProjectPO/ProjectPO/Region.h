#pragma once
#include"Citizen.h"

///This class represents single region which contains population.
/// 
///Every region has its own economy. Economy determines amount
///of medical staff and soldier in this region. 
///Moreover increases the chance of travelling human to another country.
class Region
{
	int economics;
	std::string nameOfRegion;
	int population_amount;

public:
	Region(std::string, int, int);
	///Every element of this vector stores reference to single inhabitant of region.
	std::vector<Citizen*> population;
	int getEconomics();
	int getPopulationAmount();
	std::string getNameOfRegion();
	
};

