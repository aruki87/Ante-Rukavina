// Ostatak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int  x, k, d, o;
	cin >> k >> d >> o;
	for (x = 1; x < 100000; x++) {
		if (x*k%d == o) {
			cout << x;
			x = 200000;
		}
		
	}
	if (x == 100000) {
		cout << -1;
	}
}