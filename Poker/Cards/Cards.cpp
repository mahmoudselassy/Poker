// Cards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include "Poker.h"
using namespace std;

int main()
{
	Poker p1;
	p1.PrintCards();
	this_thread::sleep_for(5s);
	cout << "---------------------------------------------------------------------" << endl;
	p1.Mix();
	p1.PrintCards();
	this_thread::sleep_for(5s);
	cout << "---------------------------------------------------------------------" << endl;
	p1.Divide();
	
	
	return 0;
}


