#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <conio.h>

///Pure abstract class from which Nerve, Reproductive and Respiratory inherits.
///
///In program there are three different types of viruse.Their purpose is to kill humanity, but
///in different ways they are depending on their type. For example - 
///Nerve virus turns people into zombies, that are hostile and kills Citizen, Medical Staff
///and Soldier. 
///Reproductive virus makes people sterile, so population might not be able to maintain.
///Respiratory Virus significally lowers human immunity, what decreases his chances to survive.
///All three viruses have different level of mutation.
///Mutation substracts amount of healing human can receive.

class Virus {
protected:
    std::string virusName;
	///parameter which influences human recovery when he is infected
	int mutation;
	/// logical parameter that defines is virus cuarable or not
	bool iscurable;
public:
	Virus();
	/// Constructor which initializes object parameters.
	Virus(std::string, bool, int);
	int getMutation();
	std::string getVirusName();
	std::string setVirusName();
	virtual int ability() = 0;
};

