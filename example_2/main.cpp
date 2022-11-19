
#include<iostream>
#include"Mage.hpp"
#include"IceMage.hpp"
#include"FireMage.hpp"

void main()
{
	IceMage gandalf = IceMage(5, 25);
	FireMage sauraman = FireMage(5, 25);
	Mage* currentMage;

	currentMage = &gandalf;
	currentMage->GetDamage(1);
	currentMage->Spell();

	currentMage = &sauraman;
	currentMage->GetDamage(1);
	currentMage->Spell();

	gandalf.Spell();
	sauraman.Spell();

}