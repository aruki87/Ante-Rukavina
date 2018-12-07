// pokazivaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int x = 7;
	int *p_x = nullptr;
	p_x = &x;

	cout << "p = " << x << endl;
	cout << "p_x = " << p_x << endl;
	cout << "&x = " << &x << endl;
	cout << "*p_x = " << *p_x << endl;
	*/

	/*int *p_x = new int;
	*p_x = 10;
	cout << "Na adresi " << p_x << " upisana je vrijednost " << *p_x << endl;
	delete p_x;
	p_x = nullptr;*/

	int x;
	cout << "unesite velicinu polja: ";
	cin >> x;

	int *polje = new int[x];
	for (int i = 0; i < x; i++) {
		cout << "Polje " << i << ": ";
		cin >> polje[i];
	 }
	for (int i = 0; i < x; i++) {

		cout << polje[i]<<"\t";
		
	}

	cout << polje+4;
	
}

