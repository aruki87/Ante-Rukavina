// petlje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <windows.h>

int main()
{
	/*int a, b;
	a = 0;
	cin >> b;
	while (b != 0) {
		a += b;
		cin >> b;
	}
	cout << a;*/

	/*int lozinka;
	int c = 3;
	while ( c > 0) {
		cin >> lozinka;
		if (lozinka == 9876) {
			cout << "Tocna lozinka";
			c = 0;
		}
		else {
			cout << "Pogresna lozinka imate jos " << c - 1 << " pokusaja";
			c--;
		}
	}*/

	/*for (int i = 99; i > 0; i--) {
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall." << endl;
	}*/

	/*int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		cout << i * i << endl;
	}*/

	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i * j << " ";
		}
		cout << endl;
	}*/

	while (1) {
		cout << "Beskonacna petlja! ";
		Sleep(500);
		
	}
}

