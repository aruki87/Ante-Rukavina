// prosjek ocjena.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int n = 1;
	float s = 0;
	int c = 0;
	while (n > 0) {
		cin >> n;
		s += n;
		c++;
		if (n == 1) {
			cout << 1;
			return 0;
		}
	}
	c--;
	cout << setprecision(2) << fixed << s / c;
	return 0;

}