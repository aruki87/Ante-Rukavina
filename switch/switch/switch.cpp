// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
# include <string>
using namespace std;

int main()
{
	float a = 1;
	float b = 1;
	float c = 1;
	/*
	char operator1 = '0';
	cout << "Unesite prvi broj:" << endl;
	cin >> a;
	cout << "Unesite drugi broj:" << endl;
	cin >> b;
	cout << "Unesite operator:" << endl;
	cin >> operator1;

	switch (operator1) {
		case int('+') :
			c = a + b;
			cout << "Rezultat je " << setprecision(2) << fixed << c << endl;
			break;
		case int('-') :
			c = a - b;
			cout << "Rezultat je " << setprecision(2) << fixed << c << endl;
			break;
		case int('*') :
			c = a * b;
			cout << "Rezultat je " << setprecision(2) << fixed << c << endl;
			break;
		case int('/') :
			c = a / b;
			cout << "Rezultat je " << setprecision(2) << fixed << c << endl;
			break;
		default :
			cout << "Unijeli ste pogresan operator" << endl;
	}*/
	int d = 1;
	int e = 1;

	/*cout << "izaberite opciju 1 za unos i ispis broja,\n opciju 2 za ispis \"Dobar dan\",\n opciju 3 za izlaz iz programa\n";
	cin >> d;

	switch (d) {
		case 1:
			cout << "Unesite broj" << endl;
			cin >> e;
			cout << "Izlistanje broja: " << e;
			break;
		case 2:
			cout << "Dobar dan" << endl;
			break;
		case 3:
			break;
	}*/

	string stih1 = "Hey hey hey Ba de ya," "dancing in September Ba de ya,";
	string stih2 = "say do you remember Ba de ya,";
	string stih3 = "dancing in September Ba de ya,";
	string stih4 = "never was a cloudy day";
	cout << "unesite redni broj stiha" << endl;
	cin >> d;
	
	switch (d) {
		case 1: 
			cout << stih1 << endl;
		case 2:
			cout << stih2 << endl;
		case 3:
			cout << stih3 << endl;
		case 4:
			cout << stih4 << endl;

	}
}

