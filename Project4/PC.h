#include "Headphohes.h"
#include "Keyboard.h"
#include "Monitor.h"
#include "Mouse.h"
#include "RAM.h"
#include "SSD.h"

#include <iostream>
#include <string>

using namespace std;

#pragma once
class PC
{
	Keyboard * keyboard;
	Headphohes* headphones;
	Monitor* monitor;
	Mouse* mouse;
	RAM ram;
	SSD ssd;

	string model;
	double price;


public:

	PC();
	PC(string m, double p, Keyboard* k, Headphohes* h, Monitor* mon, Mouse* ms, RAM r, SSD s);
	double GetPrice();
	void Output();

};

