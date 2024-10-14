#include <iostream>
#include <string>
using namespace std;

#pragma once
class Processor
{
	string model;
	double price;
public:
	Processor();
	Processor(string m);
	Processor(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);




};

