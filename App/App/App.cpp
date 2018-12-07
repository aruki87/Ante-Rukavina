// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a0, b0, a1, a2, b1, b2;
	cin >> a0 >> b0 >> a1 >> a2 >> b1 >> b2;
	if (a0 > b0) {
		if (a1 < a2) {
			cout << a1;
		}
		else {
			cout << a2;
		}
	}
	else {
		if (b1 < b2) {
			cout << b1;
		}
		else {
			cout << b2;
		}
	}
	
}