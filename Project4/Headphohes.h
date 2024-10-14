#include <iostream>
#include <string>
using namespace std;

#pragma once
class Headphohes
{
	string model;
	double price;
public:
	Headphohes();
	Headphohes(string m);
	Headphohes(string m, double p);
	string GetModel();
	double GetPrice();
	void SetPrice(double pr);



};


