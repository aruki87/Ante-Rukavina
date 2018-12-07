// apsolutna razlika.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	cin >> a;
	cin >> b;
	c = a * b;
	if (c >= 0) {
		cout << c;
	}
	else {
		cout << c * (-1);
	}

}
