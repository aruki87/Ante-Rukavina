// puding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, pl, k, pi, puc, puv;
	cin >> n >> pl >> k >> pi >> puc >> puv;
	n = n - pl/2 - k/2 - pi/2;
	if (n >= puc/2) {
		cout << "PUDING OD COKOLADE";
	}
	else {
		cout << "PUDING OD VANILIJE";
	}
}

