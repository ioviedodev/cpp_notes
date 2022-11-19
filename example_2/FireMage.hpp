#ifndef FIREMAGE_HPP
#define FIREMAGE_HPP

#include<iostream>
#include"Mage.hpp"

#define BONUS 10

class FireMage : public Mage
{
public:
	FireMage(int iBaseHp, int iBasePower) : Mage(iBaseHp, iBasePower)
	{
		Hp = iBaseHp + BONUS;
		Power = iBasePower ;
	}
};

#endif