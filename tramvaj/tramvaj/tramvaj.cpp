// tramvaj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int m, t, r;
	cin >> m >> t;
	if (t == 0) {
		cout << 0;
	}
	else if (m%t == 0) {
		r = m / t - 1;
		cout << r;
	}
	else {
		r = m / t;
		cout << r;
	}
}

