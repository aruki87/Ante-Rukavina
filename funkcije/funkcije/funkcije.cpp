// funkcije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void ninteynine_bottles() {
	for (int i = 99; i > 0; i--) {
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer. " << endl << "Take one down and pass it around, " << i - 1 << "  bottles of beer on the wall." << endl;
	}
}

void add() {
	int a, b;
	cin >> a >> b;
	while (b != 0) {
		cout << a + b << endl;
		cin >> a >> b;
	}
	
}

void lozinka() {
	int lozinka = 1234;
	int input;
	int c = 3;
	while (c > 0) {
		cout << "Unesite lozinku!" << endl;
		cin >> input;
		if (input == lozinka) {
			cout << "Ispravna lozinka!" << endl;
			c = 0;
		}
		else {
			c--;
			if (c > 0) {
				cout << "Neispravna lozinka, imate jos " << c << " pokusaja!" << endl;
			}
		}
	}
}


void tablica_mnozenja() {
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			cout << i * j << "\t";
			if (j % 10 == 0) {
				cout << endl;
			}
		}
	}
}

void izbornik() {
	int izbor;
	cout << "Koju funkciju zelite pozvati?" << endl << "Za biranje upisite redni broj:" << endl << "1. ninetynine bottles\t" << "2 . add\n" << "3. lozinka\t" << "4. tablica mnozenja" << endl;
	cin >> izbor;
	switch (izbor) {
		case 1: ninteynine_bottles();
				break;
		case 2: add();
				break;
		case 3: lozinka();
				break;
		case 4: tablica_mnozenja();
				break;
	}
}

int calculator() {
	int izbor;


}

int main()
{	
	


}

