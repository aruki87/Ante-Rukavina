// standardna devijacija.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctgmath>
using namespace std;

int main()
{
	float p = 0;
	float dev = 0;
	float r=1;
	float array[5];
	int i = 0;
	int j = 0;
	for (j = 0; j < 5; j++) {
		cin >> r;
		p += r;
		array[j] = r;
	}
	p /= 5;
	for (i = 0; i < 5; i++) {
		
		dev += (array[i] - p)*(array[i] - p);
	}

	dev /= 5;
	dev = sqrt(dev);
	cout << setprecision(2) << fixed << p << endl;
	cout << setprecision(2) << fixed << dev << endl;

}	
