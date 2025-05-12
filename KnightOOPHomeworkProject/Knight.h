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
	double swordDamage;
	double handDamage;

	Knight()
	{
		sword = "gladius";
		alive = true;
		armor = 50;
		health = 100;
		age = 35;
		swordDamage = 40.5;
		handDamage = 15;
	}

	Knight(string longsword)
	{
		sword = longsword;
		alive = true;
		armor = 60;
		health = 120;
		age = 46;
		swordDamage = 73;
		handDamage = 24;
	}

	Knight(string katana, int a)
	{
		sword = katana;
		alive = true;
		armor = 60;
		health = 125;
		age = a;
		swordDamage = 65;
		handDamage = 30;
	}

	Knight(string odachi, bool al, int arm, int hp, int a, double sw_dmg, double h_dmg)
	{
		sword = odachi;
		alive = al;
		armor = arm;
		health = hp;
		age = a;
		swordDamage = sw_dmg;
		handDamage = h_dmg;
	}

	Knight(const Knight& knight)
	{
		sword = knight.sword;
		alive = knight.alive;
		armor = knight.armor;
		health = knight.health;
		age = knight.age;
		swordDamage = knight.swordDamage;
		handDamage = knight.handDamage;
	}

	~Knight()
	{

	}

	

	string toString() {
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
	}
}; 