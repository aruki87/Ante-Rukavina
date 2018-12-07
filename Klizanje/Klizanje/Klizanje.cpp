// Klizanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if ((n + m) > (a + b)) {
		cout << a + b;
	}
	else {
		cout << n + m;
	}
}
