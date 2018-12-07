// umnozak nizać.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int u = 1;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		u *= a;
	}
	cout << u;
}

