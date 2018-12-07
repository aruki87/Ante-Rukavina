// operatori dodjele.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	cout << "Unesite broj 1" << endl;
	cin >> a;
	cout << "Unesite broj 2" << endl;
	cin >> b;
	c = a;
	c *= b;
	cout << "a*=b: " << c << endl;
	c = a;
	c /= b;
	cout << "a/=b: " << c << endl;
	c = a;
	c += b;
	cout << "a+=b: " << c << endl;
	c = a;
	c -= b;
	cout << "a-=b: " << c << endl;
	

}

