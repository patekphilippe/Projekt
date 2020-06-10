#pragma once
#include <windows.h>
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <conio.h>
#include "Virus.h"

/// This is base class, from which Zombie, Soldier, Medical Staff inherits.
/// Object of this class represents common human being. It can travel,
/// give birth to a children, and transmit virus with a certain chance.
/// His immunity influences amount of healing he might receive from
/// Medical Staff. Fertility and age determines his ability to procreate.
class Citizen
{
protected:
	int damage;
	///numerical identificator of infection object suffers.
	int virusID;
	///the older object is the less resistance it has
	int age;
	int health;
	///influences amount of healing he receives
	int immune;
	bool isInfected;
	bool fertile;
	std::string profession;
	std::string infectionName;
public:
	Citizen();
	Citizen(int age, int immune, std::string profession, int health, bool fertile);
	int getAge(); 
	int getHealth();
	std::string getName();
	/// returns name of the infection he is currently infected
	std::string getInfectionName();
	int getImmune();
	/// returns ID of virus which can be used to identify numerically his infection.
	/// 0 stands for reproductive, 1 for Nerve, and 2 for Respiratory.
	int getVirusId();
	int getDamage();
	bool getIsInfected();
	void setisInfected(bool);
	void setFertile(bool);
	void setImmune(int);
	void setInfectionName(std::string);
	/// Function which substracts specified amount of health from the object.
	/// 
	/// <param name="health"></param> Determines amount of substracted health.
	void impairHealth(int);
	/// Function which adds specified amount of health to the object
	/// 
	/// <param name="health"></param> Determines amount of healing received.
	void bandageWounds(int);
	/// Function that influences object in a way that depends on virus he is infected.
	/// Nerve virus infects object, to be later turned into Zombie.
	/// Reproductive virus makes object sterile.
	/// Respiratory virus lowers object immunity.
	/// <param name="virus"></param> Adress of object infection.
	void affect(Virus*);
	bool isFertile();
	virtual int ability();
};

