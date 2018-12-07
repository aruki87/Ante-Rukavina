// if else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float a = 1;
	float b = 1;
	float c = 1;
	/*
	cout << "Unesite broj godina prve osobe." << endl;
	cin >> a;
	cout << "Unesite broj godina druge osobe" << endl;
	cin >> b;
	if (a > b) {
		cout << "Prva osoba je starija od druge" << endl;
	}
	else {
		cout << "Druga osoba je starija od prve" << endl;
	} */

	/*
	cout << "Unesite broj" << endl;
	cin >> a;
	if (a % 2 == 0) {
		cout << "Broj je paran" << endl;
	}
	else {
		cout << "Broj je neparan" << endl;
	} */
	/*
	int lozinka = 9876;
	cout << "Molimo unesite lozinku" << endl;
	cin >> a;
	if (a == lozinka) {
		cout << "Unijeli ste tocnu lozinku" << endl;
	}
	else {
		cout << "Unijeli ste pogresnu lozinku" << endl;
	} */
	
	char operator1 = '#';
	cout << "Molimo unesite broj 1" << endl;
	cin >> a;
	cout << "Molimo unesite broj 2" << endl;
	cin >> b;
	cout << "Molimo unesite matematicki operator" << endl;
	cin >> operator1;


	if (operator1 == '+') {
		c = a + b;
		cout << setprecision(2) << fixed << "Rezultat je " << c << endl;
	}
	else if (operator1 == '-') {
		c = a - b;
		cout << setprecision(2) << fixed << "Rezultat je " << c << endl;
	}
	else if (operator1 == '*') {
		c = a * b;
		cout << setprecision(2) << fixed << "Rezultat je " << c << endl;
	}
	else if (operator1 == '/') {
		c = a / b;
		cout << setprecision(2) << fixed << "Rezultat je " << c << endl;
	}
	else {
		cout << "Niste unijeli tocan operator" << endl;
	}
}
