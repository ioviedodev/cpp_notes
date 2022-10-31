#ifndef ICEMAGE_HPP
#define ICEMAGE_HPP

#include<iostream>
#include"Mage.hpp"

#define BONUS 30

using namespace std;


class IceMage : public Mage
{
public:
	IceMage(int iMana, int iHp, int iPower) : Mage(iMana, iHp, iPower)
	{
		mana = iMana;
		hp = iHp;
		power = iPower + BONUS;
	}
};


#endif