#include <iostream>
#include <string>
#include "Restaurant.h"
using namespace std;

Restaurant::Restaurant()
{
	name = "";
	cuisine = "";
	favoritedish = "";
	cost = 0;
	rating = 0;
}
Restaurant::Restaurant(string n, string c, string f, int m, int r)
{
	name = n;
	cuisine = c;
	favoritedish = f;
	cost = m;
	rating = r;
}
string Restaurant::getName()
{
	return name;
}
string Restaurant::getCuisine()
{
	return cuisine;
}
string Restaurant::getFavoritedish()
{
	return favoritedish;
}
int Restaurant::getCost()
{
	return cost;
}
int Restaurant::getRating()
{
	return rating;
}
void Restaurant::setName(string n)
{
	name = n;
}
void Restaurant::setCuisine(string c)
{
	cuisine = c;
}
void Restaurant::setFavoritedish(string f)
{
	favoritedish = f;
}
void Restaurant::setCost(int m)
{
	cost = m;
}
void Restaurant::setRating(int r)
{
	rating = r;
}
void Restaurant::getRestaurantInput()
{
	cout << "Please enter a restaurant name " << endl;
	getline(cin, name, '\n');
	cin.ignore();
	cout << "Please enter the cuisine of the restaurant" << endl;
	getline(cin, cuisine, '\n');
	cin.ignore();
	cout << "Please enter a favorite dish" << endl;
	getline(cin, favoritedish, '\n');
	cin.ignore();
	cout << "Please enter an average cost of 1=3 with 1 being the cheapest option" << endl;
	cin >> cost;
	cin.ignore();
	cout << "Please enter a rating of 1-5 with 1 being bad" << endl;
	cin >> rating;
	cin.ignore();
}
ostream& operator << (ostream& output, Restaurant& i)
{
	output << "Restaurant:" << i.name << "|" << i.cuisine << "|" << i.favoritedish << "|" << i.cost << "|" << i.rating << endl;
	return output;
}
