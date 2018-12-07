// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int n = 1;
	int l = 1;
	int i = 1;
	int s = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> l;
		s += l;
	}
	cout << s;
	return 0;
	
}


