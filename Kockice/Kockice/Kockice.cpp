// Kockice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int m, s;
	cin >> m >> s;
	if (m < 4) {
		m = 7 - m;
	}
	if (s < 4) {
		s = 7 - s;
	}
	if (s > m) {
		cout << "slavko";
	}
	else if (m > s) {
		cout << "mirko";
	}
	else {
		cout << "nerijeseno";
	}
}
