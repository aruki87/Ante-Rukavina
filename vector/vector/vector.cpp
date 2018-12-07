// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*vector<int> zbroj;
	int unos;
	int s = 0;
	int z=0;
	cin >> unos;
	while (unos > 0) {
		s = z;
		s += unos;
		zbroj.push_back(s);
		z = unos;
		cin >> unos;
	}
	cout << zbroj.size() << endl;
	cout << "Pristupite memoriji: " << endl;
	cin >> z;
	cout << zbroj[z];*/

	int z = 0;
	vector<int> vektor;
	int unos;
	cin >> unos;
	while (unos > 0) {
		if (unos > 100) {
			vektor.push_back(unos);
		}
		else {
			vektor.insert(vektor.begin(), unos);
		}
		
		cin >> unos;
	}
	cout << vektor.size() << endl;
	cout << "Pristupite memoriji: " << endl;
	cin >> z;
	cout << vektor[z];

}

