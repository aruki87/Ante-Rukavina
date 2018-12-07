// prosti broj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	long int n = 1;
	long int c = 0;
	long int i = 3;
	cin >> n;
	while (c == 0 && i<n) {
		if (n%i == 0) {
			c++;
		}
		i++;
	}

	if (c > 0) {
		cout << "Broj nije prost" << endl;
	} else {
		cout << "Broj je prost" << endl;
	}
	
}
