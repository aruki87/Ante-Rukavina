// Ects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int u, p;
	cin >> u >> p;
	if (p < 30) {
		cout << 8400;
	}
	else if (p < 55) {
		cout << (u - p) * 140;
	}
	else {
		cout << 0;
	}
}

