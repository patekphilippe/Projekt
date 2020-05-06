#pragma once
class World
{
private:
	int deaths;
	int survivors;
	int infected;

public:
	World(int deaths , int survivors, int infected);

	void getDeaths();
	void getSurvivors();
	void getInfected();
	void makeDiagram(int populaton, int deaths, int active_cases);

	~World();
};

