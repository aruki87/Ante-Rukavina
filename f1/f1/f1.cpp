// f1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=0;
	float x;
	int b1, b2;
	vector <float> time;
	cin >> x;
	while ((x != 0)) {
		time.insert(time.begin(), x);
		cin >> x;
		n++;
		if (n == 15) {
			x = 0;
		}
	}
	time.insert(time.begin(), x);
	cin >> b1;
	cin >> b2;
	
	cout << time[b2-1] - time[b1-1];
}