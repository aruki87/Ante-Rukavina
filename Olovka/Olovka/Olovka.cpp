// Olovka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int broj, z1, z3;
	cin >> broj;
	z1 = broj / 100 % 10;
	z3 = broj % 10;
	if (z1 > z3) {
		cout << "LIJEVI NAGIB";
	}
	else if (z1 == z3) {
		cout << "RAVNOTEZA";
	}
	else {
		cout << "DESNI NAGIB";
	}
	return 0;
}

