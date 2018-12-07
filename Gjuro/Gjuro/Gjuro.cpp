// Gjuro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 5 > 2) {
		n = (n- n%5)+5;
	}
	else {
		n = (n - n % 5);
	}
	cout << n;
}
