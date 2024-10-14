#include <iostream>
#include <string>
using namespace std;

#pragma once
class SSD
{
	string model;
	double price;
public:
	SSD();
	SSD(string m);
	SSD(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);


};


