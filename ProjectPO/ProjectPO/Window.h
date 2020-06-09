#pragma once
#include "World.h"
#include <fstream>

///This class allows user to open, repeat or parametrise simulation.
///  
///After every simulation user can save data to txt file.
class Window
{
private:
	std::string firstmenu[3];
	std::string secondmenu[3];
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
	///Shows monthly statistics
	void showStatistics();
};

