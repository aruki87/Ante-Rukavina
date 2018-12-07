// racunske operacije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a = 1;
	float b = 2;
	int c = 3;
	
	/*cout << "Unesite broj 1" << endl;
	cin >> a;
	cout << "Unesite broj 2" << endl;
	cin >> b;
	cout << "Zbroj je " << a + b << endl;
	cout << "Razlika je " << a - b << endl;
	cout << "Produkt je " << a * b << endl;
	float num;
	num = a / b;
	cout << setprecision(2) << fixed  << num << endl;*/

	cout << "Unesite cetveroznamenkasti broj 3" << endl;
	cin >> c;
	cout << (c - c % 1000)/1000 << " " << (c % 1000 - c % 100)/100 << " " << (c % 100 - c% 10)/10 << " " << c%10 ;


}
