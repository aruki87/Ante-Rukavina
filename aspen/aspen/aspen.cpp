// aspen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	int s = 1;
	int a = 1;
	float r = 1;
	cin >> s;
	cin >> a;
	r = float(s) * 1.8 + 32;
	r -= a;
	if (r < 0) {
		r*(-1);
	}
	cout << r;
}

