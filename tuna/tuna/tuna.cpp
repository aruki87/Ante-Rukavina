// tuna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int p1, p2, p3;
	int n, x;
	int u = 0;
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		cin >> p1 >> p2;
		if (p1 > p2) {
			if ((p1 - p2)<=x) {
				u += p1;
			}
			else {
				cin >> p3;
				u += p3;
			}
		
		}
		else {
			if ((p2 - p1) <= x) {
				u += p2;
			}
			else {
				cin >> p3;
				u += p3;
			}
		}
		
	}
	cout << u;
}