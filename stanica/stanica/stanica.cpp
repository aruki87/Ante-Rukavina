// stanica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string stanica1 = "";
	string stanica2 = "";
	int n, k, m;
	cin >> n >> k >> m;
	if (n > k) {
		stanica1 = "STANICA 1: ZAKASNIT CE";
		cout << stanica1 << endl;
		if ((k + m) < n) {
			stanica2 = "STANICA 2: ZAKASNIT CE";
			cout << stanica2;
		}
		else {
			stanica2 = "STANICA 2: ";
			cout << stanica2 << k + m - n;
		}
	} else{
		stanica1 = "STANICA 1: ";
		cout << stanica1 << k-n << endl;
		if ((k + m) < n) {
			stanica2 = "STANICA 2: ZAKASNIT CE";
			cout << stanica2;
		}
		else {
			stanica2 = "STANICA 2: ";
			cout << stanica2 << k + m - n;
		}
	}
}

