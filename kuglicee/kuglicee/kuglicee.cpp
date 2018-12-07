// kuglicee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int prva, druga, zamjena1 , zamjena2;
	cin >> prva >> druga;
	for (int i = 0; i < 5; i++) {
		cin >> zamjena1; 
		cin >> zamjena2;

		if (prva == zamjena1) {
			prva = zamjena2;
		}
		else if (prva == zamjena2) {
			prva = zamjena1;
		}
		if (druga == zamjena1) {
			druga = zamjena2;
		}
		else if (druga == zamjena2) {
			druga = zamjena1;
		}
	}
	if (prva < druga) {
		cout << prva <<" "<< druga;
	}
	else {
		cout << druga << " " << prva;
	}
}

