#include <iostream>
#include <string>
using namespace std;

#pragma once
class Keyboard
{
	string model;
	double price;
public:
	Keyboard();
	Keyboard(string m);
	Keyboard(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);


};


