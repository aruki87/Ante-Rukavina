// sreca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

	float p = 0;
	int n = 1;
	int c = 0;
	
	while (n > 0) {
		cin >> n;
		p += n;
		c++;
		if(n == 1) {
			p = 1;
			c = 1;
			n = 0;
		}
	}

	cout << setprecision(2) << fixed << p / c;
}

/*
int main()
{

	int n;
	int b;
	int s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b;
		if (b >= i) {
			s++;
		}
	}

	cout << s;

}*/