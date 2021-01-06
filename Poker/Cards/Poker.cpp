#include "Poker.h"
#include <string>
#include <iostream>
using namespace std;
string Numbers[13] = { "1","2","3","4","5","6","7","8","9","10","J","Q","K" };
string Type[4] = { "Diamonds","Hearts","Clubs","Spades" };
string All[52];
Poker::Poker() 
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = i * 13; j < 13 * (i + 1); j++)
		{
			All[j] = Numbers[j % 13] + Type[i];
		}
	}
}

void Poker::PrintCards()
{
	for (int j = 0; j < sizeof(All) / sizeof(All[0]); j++)
	{
		   cout<< All[j]<<endl;
	}
}

void Poker::Mix()
{
	string temp;
	for (int j = 0; j < sizeof(All) / sizeof(All[0]); j++)
	{
		  temp = All[j];
		  int random = rand() % 52;
		  All[j] = All[random];
		  All[random] = temp;

	}
}

void Poker::Divide()
{
	string Players[4][13];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0, k = i * 13 ; j < 13 , k < 13 * (i + 1); j++,k++)
		{
			Players[i][j]=All[k];
		}
	}

	for (int i = 0; i < 4; i++)
	{ 
		cout << "Player " << i + 1<<endl;
		for (int j = 0; j < 13; j++)
		{
			cout << Players[i][j] << " ";
		}
		cout << endl;

	}


}