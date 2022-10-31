#ifndef MAGE_HPP
#define MAGE_HPP

using namespace std;

class Mage {

protected:
	int mana, hp, power;

public:
	Mage(int iMana, int iHp, int iPower)
	{
		mana = iMana;
		hp = iHp;
		power = iPower;
	}

	void Spell()
	{
		cout << "Fireworks!!! You have " << power <<  " of power!! "<< endl;
	}
};

#endif