// napolitanke.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int r, s, k, d, v;
	cin >> r >> s >> k >> d >> v;
	cout << (r*s*k) - (d + v);
}

