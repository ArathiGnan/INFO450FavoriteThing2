#include <iostream>
#include <string>
#include <fstream>
#include "Restaurant.h"
#include "RestaurantList.h"
using namespace std;

RestaurantList::RestaurantList()
{
	numItems = 0;
}
void RestaurantList::AddItem()
{
	items[numItems].getRestaurantInput();
	numItems++;
}
void RestaurantList::showList()
{
	int i;
	for (i = 0; i < numItems; i++)
	{
		cout << items[i];
	}
}

int RestaurantList::writeToFile(string filename)
{
	int i;
	ofstream outputFile;
	outputFile.open(filename, ios::app);
	if (!outputFile)
	{
		cout << "ERROR- file open failed!" << endl;
		return -2;
	}
	for (i = 0; i < numItems; i++)
	{
		outputFile << items[i].getName() << "|";
		outputFile << items[i].getCuisine() << "|";
		outputFile << items[i].getFavoritedish() << "|";
		outputFile << items[i].getCost() << "|";
		outputFile << items[i].getRating() << "|" << endl;
	}
	outputFile.close();
	return 0;
}
int RestaurantList::readFromFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile)
	{
		cout << "ERROR - file open failed!" << endl;
		return -2;
	}

	string name;
	string cuisine;
	string favoritedish;
	int cost;
	int rating;
	string inputstring;

	while (!inputFile.eof())
	{
		getline(inputFile, inputstring, '|');
		if (inputstring.length() >= 1)
		{
			cost = stoi(inputstring);
			getline(inputFile, name, '|');
			rating = stoi(inputstring);
			getline(inputFile, inputstring, '\n');

			items[numItems].setName(name);
			items[numItems].setCuisine(cuisine);
			items[numItems].setFavoritedish(favoritedish);
			items[numItems].setCost(cost);
			items[numItems].setRating(rating);
			numItems++;
		}

		inputFile.close();
		return 0;
	}
}
