#include <iostream>
#include <string>
#include "Restaurant.h"
#include "RestaurantList.h"
using namespace std;

int main()
{
	cout << "Welcome to my favorite things!" << endl;
	cout << "This list involves information about local restaurantsand eateries." << endl;
	cout << "In these lists, you will find the name of the restaurant, the type of cuisine, a favorite dish, the average cost, and the overall rating." << endl;
	cout << "The first set of questions is just a practice round" << endl;

	Restaurant iobject1;
	iobject1.getRestaurantInput();
	cout << iobject1 << endl;

	RestaurantList myList;
	myList.AddItem();
	myList.AddItem();
	myList.AddItem();
	myList.AddItem();

	myList.showList();
	myList.writeToFile("c:\\ArathiGnanodayan\\downloads\\mytype.txt");

	return 0;
}