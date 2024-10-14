#include "Headphohes.h"
#include "Keyboard.h"
#include "Monitor.h"
#include "Mouse.h"
#include "RAM.h"
#include "SSD.h"
#include "PC.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Keyboard k1("XP_344", 1000);
	Headphohes h1("Marshal", 1200);
	Monitor mon1("Xiomi", 4000);
	Mouse ms1("Logitech", 600);
	RAM r1("Fury", 3600);
	SSD s1("Fury", 2300);

	PC pc1("Lenovo", 10000, &k1, &h1, &mon1, &ms1, r1, s1);
	pc1.GetPrice();
	cout << endl;
	pc1.Output();

}
