// pikado.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, s, k;
	cin >> n ;
	cin >> s >> k;
	if ((s*k == n) && (k==2)) {
		cout << "Odlicno";
	}
	else if ((s*k > n)||(s*k == n)||(n-(s*k)==1)) {
		cout << "Lose";
	}
	else {
		cout << "Dobro";
	}

}

