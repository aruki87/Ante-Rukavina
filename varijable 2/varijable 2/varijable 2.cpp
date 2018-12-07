// varijable 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
const int PI = 3.14;

int main()
{
	int a = 1;
	float b = 23.3232;
	char c = 'D';
	signed int d = -1211;
	bool e = "false";
	int f = 1;
	int g = 12;
	int h = 1;
	/*
	cout << "unesi int" << endl;
	cin >> a;
	cout << "unesi float" << endl;
	cin >> b;
	cout << "unesi char" << endl;
	cin >> c;
	cout << "unesi signed int" << endl;
	cin >> d;
	cout << "unesi bool" << endl;
	cin >> e;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;*/

	cout << "unesi broj 1" << endl;
	cin >> f;
	cout << "unesi broj 2" << endl;
	cin >> g;

	h = f;
	f = g;
	g = h;
	cout << f << endl;
	cout << g << endl; 
	return 0;
}

