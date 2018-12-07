// superkuhar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int edi[9];
	int tin[9];
	int eu = 0;
	int tu = 0;
	for (int i = 0; i < 9; i++) {
		cin >> edi[i];
		eu += edi[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> tin[i];
		tu += tin[i];
	}
	if (eu > tu) {
		cout << "Edi " << eu;
	}
	else if (tu > eu) {
		cout << "Tin " << tu;
	}
	else {
		cout << "Nema pobjednika " << eu;
	}
}

