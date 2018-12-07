// joker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	int joker[6];
	int li1 = 1;
	int li2 = 1;
	int li3 = 1;
	int switch1 = 0;
	int switch2 = 0;
	int switch3 = 0;
	int c1[6];
	int c2[6];
	int c3[6];
	for (int i = 0; i < 6; i++) {
		cin >> joker[i];
		joker[i] = joker[i] % 10;
		
	}
	cin >> li1 >> li2 >> li3;

	for (int i = 0; i < 6; i++) {
		c1[i] = li1 / (int(pow(10, i)))%10;
		c2[i] = li2 / (int(pow(10, i))) %10;
		c3[i] = li3 / (int(pow(10, i))) %10;
		
		
	}
	li1 = 0;
	li2 = 0;
	li3 = 0;
	
	for (int i = 0; i < 6; i++) {
		if ((joker[5 - i] == c1[i])&&(switch1<1)) {
			li1++;
		}
		else {
			switch1 = 1;
		}
		if ((joker[5 - i] == c2[i]) && (switch2 < 1)) {
			li2++;
		}
		else {
			switch2 = 1;
		}
		if ((joker[5 - i] == c3[i]) && (switch3 < 1)) {
			li3++;
		}
		else {
			switch3 = 1;
		}

	}
	if (li1 == 6) {
		cout << "I. vrsta" << endl;
	}
	else if (li1 == 5) {
		cout << "II. vrsta" << endl;
	}
	else if (li1 == 4) {
		cout << "III. vrsta" << endl;
	}
	else if (li1 == 3) {
		cout << "IV. vrsta" << endl;
	}
	else if (li1 == 2) {
		cout << "V. vrsta" << endl;
	}
	else {
		cout << "Nedobitan" << endl;
	}
	if (li2 == 6) {
		cout << "I. vrsta" << endl;
	}
	else if (li2 == 5) {
		cout << "II. vrsta" << endl;
	}
	else if (li2 == 4) {
		cout << "III. vrsta" << endl;
	}
	else if (li2 == 3) {
		cout << "IV. vrsta" << endl;
	}
	else if (li2 == 2) {
		cout << "V. vrsta" << endl;
	}
	else {
		cout << "Nedobitan" << endl;
	}
	if (li3 == 6) {
		cout << "I. vrsta" << endl;
	}
	else if (li3 == 5) {
		cout << "II. vrsta" << endl;
	}
	else if (li3 == 4) {
		cout << "III. vrsta" << endl;
	}
	else if (li3 == 3) {
		cout << "IV. vrsta" << endl;
	}
	else if (li3 == 2) {
		cout << "V. vrsta" << endl;
	}
	else {
		cout << "Nedobitan" << endl;
	}
	
}

