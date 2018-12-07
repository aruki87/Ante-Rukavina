// rukomet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "HRVATSKA";
	}
	else if (a < b) {
		cout << "SPANJOLSKA";
	}
	else {
		cout << "NERIJESENO";
	}
}

