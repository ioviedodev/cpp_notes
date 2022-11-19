#ifndef ICEMAGE_HPP
#define ICEMAGE_HPP

#include<iostream>
#include"Mage.hpp"

#define BONUS 1

using namespace std;


class IceMage : public Mage
{
public:
	IceMage(int iBaseHp, int iBasePower) : Mage(iBaseHp, iBasePower)
	{
		Hp = iBaseHp;
		Power = iBasePower + BONUS;
	}
};


#endif