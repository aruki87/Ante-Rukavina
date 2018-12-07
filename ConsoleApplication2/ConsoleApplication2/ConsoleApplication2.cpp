// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int x=1;
	int i = 0;
	int y = 1;
	while (x == 1) {
		x+=i;
		i++;
		cout << x << endl;
		do {
			y = x;
			if (x % 2 == 0) {
				x = x / 2;
			}
			else {
				x = x * 3 + 1;
			}
		} while (x > 1 || x==y);
		cout << x << endl;
		Sleep(2);
	}
}	
