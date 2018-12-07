// trener.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int l,f,t;
	int lft[9];

	
	for (int i = 0; i < 9; i++) {
		cin >> lft[i];
		if (lft[i] == 4) {
			lft[i] = 10;
		}
		else if (lft[i] == 3) {
			lft[i] = 8;
		}
		else if (lft[i] == 2) {
			lft[i] = 6;
		}
		else if (lft[i] == 1) {
			lft[i] = 4;
		}
		else {
			lft[i] = 0;
		}
	}
	l = lft[0] + lft[1] + lft[2];
	f = lft[3] + lft[4] + lft[5];
	t = lft[6] + lft[7] + lft[8];
	if(l > f) {
		if (l > t) {
			cout << "LIN " << l;
		}
		else if(l==t){
			cout << "LIN " << l << endl;;
			cout << "TAO " << t;
		}
		else {
			cout << "TAO " << t;
		}
	}
	else if (f > l) {
		if (f > t) {
			cout << "FENG " << f;
		}
		else if (f == t) {
			cout << "FENG " << f << endl;
			cout << "TAO " << t;
		}
		else {
			cout << "TAO " << t;
		}
	}
	else if (f==l) {
		if (f > t) {
			cout << "FENG " << f << endl;
			cout << "LIN " << l;
		}
		else if (f == t) {
			cout << "FENG " << f << endl;
			cout << "LIN " << l << endl;
			cout << "TAO " << t;
		}
		else {
			cout << "TAO " << t;
		}
	} 
}

