#pragma once
#include <iostream>
#include <string>
#include "Restaurant.h"
using namespace std;

class RestaurantList
{
	Restaurant items[100];
	int numItems;
	int totalInventory;
public:
	RestaurantList();
	void AddItem();
	void showList();
	int readFromFile(string filename);
	int writeToFile(string filename);
};

