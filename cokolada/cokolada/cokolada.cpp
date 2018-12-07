// cokolada.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int r, s, g, m, mu;
	cin >> r >> s >> g >> m;
	mu = r * s*g;
	if (mu > m) {
		cout << 0;
	}
	else {
		cout << mu;
	}
}
