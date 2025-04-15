#include <iostream>
using namespace std;
#include <string>

class Knight
{
public:
	string sword;
	bool alive;
	int armor;
	int health;
	int age;
	double sword_damage;
	double hand_damage;


	string getString()
	{
		string s = "Sword: " + sword;
		s += ", is alive: ";
		s += (alive ? "yes" : "no")
			", armor: " + armor
			+ ", health: " + health
			+ ", sword damage: " + sword_damage + " hp"
			+ ", hand damage: " + hand_damage + " hp"
			+ ", age:" + to_string(age) + " years";

		

		return s;
	}
};