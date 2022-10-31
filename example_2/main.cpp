
#include<iostream>
#include"Mage.hpp"
#include"IceMage.hpp"

void main()
{
	Mage gandalf = Mage(2, 5, 25);
	Mage sauraman = IceMage(2, 5, 25);

	gandalf.Spell();
	sauraman.Spell();

}