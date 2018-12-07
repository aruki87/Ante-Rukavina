// prosti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 3;
	cin >> n;
	while (i < n) {
		if (n%i == 0) {
			i = n;
			cout << "nije prost";
		}
		i++;
	}
	if (i == n) {
		cout << "prost";
	}
}