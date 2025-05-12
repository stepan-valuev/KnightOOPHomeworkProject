#include "Knight.h"

int main()
{
	Knight k1;
	Knight k2("gladius");
	Knight k3("katana", 125);
	Knight k4("longsword", true, 60, 120, 46, 73, 24);
	Knight k5(k4);


	cout << k1.toString() << endl;
	cout << k2.toString() << endl;
	cout << k3.toString() << endl;
	cout << k4.toString() << endl;
	cout << k5.toString() << endl;


	return 0;
	
}