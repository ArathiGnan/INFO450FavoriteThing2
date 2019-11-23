#pragma once
#include <iostream>
#include <string>
using namespace std;

class Restaurant
{
private:
	string name;
	string cuisine;
	string favoritedish;
	int cost;
	int rating;
public:
	Restaurant();
	Restaurant(string n, string c, string f, int m, int r);
	string getName();
	string getCuisine();
	string getFavoritedish();
	int getCost();
	int getRating();
	void setName(string n);
	void setCuisine(string c);
	void setFavoritedish(string f);
	void setCost(int m);
	void setRating(int r);
	void getRestaurantInput();
	friend ostream& operator << (ostream& output, Restaurant& i);
}; //end class

