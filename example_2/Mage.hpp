#ifndef MAGE_HPP
#define MAGE_HPP

using namespace std;

class Mage {

protected:
	int Hp, Power;

public:
	Mage(int iBaseHp, int iBasePower)
	{
		Hp = iBaseHp;
		Power = iBasePower;
	}

	int Damage()
	{
		return Power;
	}

	void GetDamage(int iValue)
	{
		Hp -= iValue;
		cout << "My mage has left: " << Hp << "of life" << endl;
	}

	void Spell()
	{
		cout << "Fireworks!!! You have " << Power <<  " of power!! "<< endl;
	}


};

#endif