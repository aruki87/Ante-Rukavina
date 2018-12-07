// obrnuto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i=i+2) {
		cout << i << endl;
	}
}