// bridz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int s = 0;
	int n;
	cin >> n;
	char ki[13];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 13; j++) {
			cin >> ki[j];
			if (ki[j] == 'A') {
				s += 4;
			}
			else if (ki[j] == 'K') {
				s += 3;
			}
			else if (ki[j] == 'Q') {
				s += 2;
			}
			else if(ki[j] == 'J'){
				s += 1;
			}
		}

	}
	cout << s;
}