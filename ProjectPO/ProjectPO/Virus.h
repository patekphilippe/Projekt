#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <conio.h>

///Pure abstract class from which Nerve, Reproductive and Respiratory inherits.
///
///In program there are three different viruses.Their purpose is to kill humanity but
///in different ways depending on their speciality. For example - 
///Nerve virus turn people into zombies, that are hostile and kill Citizen, Medical Staff
///and Soldier. 
///Reproductive virus makes people sterile, so population might not be able to maintain.
///Respiratory Virus significally lowers human immunity, what decreases his chance to survive.
///All three viruses homever have one common thing - they have different level of mutation.
///Mutation substracts amount of healing human can receive.

class Virus {
protected:
    std::string virusName;
	///parameter which influences human recovery when he is infected
	int mutation;
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

