#pragma once
#include "World.h"
#include <iostream>


class Window
{
private:
	string firstmenu[3];
	string secondmenu[3];
	int choosemenu;
	int tabmenu[3];
	int menuposition;
	int menusize;
	int key;
	int exit;
	World world;

public:
	Window();
	void displayMenu();
	int setMenu();
	void openSimulation(int);	
	void closeSimulation();
	void showStatistics();
};

