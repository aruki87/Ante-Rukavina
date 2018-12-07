// pokazivaci 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void zamjena(int left, int right) {
	int temp;
	temp = left;
	left = right;
	right = temp;
	
}

void zamjena2(int left, int right) {
	int temp;
	temp = left;
	left = right;
	right = temp;
}

int *polja(int *polje, int x) {
	int *polje2 = new int[x + x / 2];

	for (int i = 0; i < x; i++) {
		polje2[i] = polje[i];
	}
	for (int i = x; i < x + x / 2; i++) {
		cin >> polje2[i];
	}

	for (int i = 0; i < x + x / 2; i++) {
		cout << "polje2[" << i << "]: " << polje2[i] << endl;
	}
	delete polje;
	return polje2;
}


int main()
{
	
	int a = 1;
	int b = 2;
	int c = 9;
	int x;
	cin >> x;
	//cout << &a <<endl << &b<< endl << &c;
	int *polje = new int[x];
	for (int i = 0; i < x; i++) {
		cin >> polje[i];

	}
	for (int i = 0; i < x; i++) {
		cout << "polje["<<i <<"]: "<<polje[i] << endl;
	}

	polje = polja(polje, x);
	x = x + x / 2;
	polje = polja(polje, x);
	
	
	
	
}

