#include "Knight.h"

int main()
{
	Knight k1, k2;

	k1.alive = true;
	k1.sword = "epic";
	k1.health = 100;
	k1.armor = 70;
	k1.age = 36;
	k1.sword_damage = 38;
	k1.hand_damage = 16;


	k2.alive = true;
	k2.sword = "legendary";
	k2.health = 120;
	k2.armor = 85;
	k2.age = 47;
	k2.sword_damage = 50;
	k2.hand_damage = 27;

	cout << "Before: " << endl;
	cout << k1.getString() << endl;
	cout << k2.getString() << endl;

	cout << "After: " << endl;
	cout << k1.getString() << endl;
	cout << k2.getString() << endl;
	

	
}