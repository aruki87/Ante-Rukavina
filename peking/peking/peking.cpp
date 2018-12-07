// peking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int ikz;
	cin >> ikz;
	if (ikz <= 50) {
		cout << "dobra kvaliteta zraka";
	}
	else if ((ikz <= 100)) {
		cout << "umjerena kvaliteta zraka";
	}
	else if ((ikz <= 150)) {
		cout << "zrak nezdrav za osjetljive grupe";
	}
	else if ((ikz <= 200)) {
		cout << "nezdrav zrak";
	}
	else if ((ikz <= 300)) {
		cout << "vrlo nezdrav zrak";
	}
	else if ((ikz <= 500)) {
		cout << "opasan zrak";
	}
}

