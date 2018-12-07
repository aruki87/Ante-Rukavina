// spparow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	char barkod [5];
	int s = 0;
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cin >> barkod[i];
		if (barkod[i] == 'D'){
			s += (n /( int((pow(10, 4-i)))))%10;
		}
	}
	cout << s;
}

