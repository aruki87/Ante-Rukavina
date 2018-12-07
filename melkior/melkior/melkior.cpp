// melkior.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int o1, o2, o3, o4, o5;
	float p;
	cin >> o1 >> o2 >> o3 >> o4 >> o5;
	p = float(o5 * 5 + o4 * 4 + o3 * 3 + o2 * 2 + o1 * 1) / (o5 + o4 + o3 + o2 + o1);
	if (o1 > 0) {
		cout << setprecision(2) << fixed << float(o5 * 5 + o4 * 4 + o3 * 3 + o2 * 2 + o1 * 1) / float(o5 + o4 + o3 + o2 + o1) << endl << "nedovoljan";
	}
	else if (p >= 4.50) {
		cout << setprecision(2) << fixed << float(o5 * 5 + o4 * 4 + o3 * 3 + o2 * 2 + o1 * 1) / float(o5 + o4 + o3 + o2 + o1) << endl << "odlican";
	}

	else if (p >= 3.50) {
		cout << setprecision(2) << fixed << float(o5 * 5 + o4 * 4 + o3 * 3 + o2 * 2 + o1 * 1) / float(o5 + o4 + o3 + o2 + o1) << endl << "vrlo dobar";
	}
	else if ((p >= 2.50)) {
		cout << setprecision(2) << fixed << float(o5 * 5 + o4 * 4 + o3 * 3 + o2 * 2 + o1 * 1) / float(o5 + o4 + o3 + o2 + o1) << endl << "dobar";
	}
	else{
		cout << setprecision(2) << fixed << p << endl << "dovoljan";
	}
}

