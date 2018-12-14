// binary sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
using namespace std;

int main()
{
	srand(time(NULL));
	int pogodi;
	int n;
	int a = 1;
	int broj = 0;
	int counter = 0;
	cout << "Unesite broj koji treba pogoditi." << endl;
	cin >> pogodi;
	broj = rand() % 100 + 1;
	if (broj == pogodi) {
		cout << "Trebao je 1 korak za pogoditi";
	}
	
	n = 100;
	a = 1;
	int h = 2;
	int sredina;
	sredina = (n + a) / 2;
	
	while(broj!=pogodi) {
		broj = rand() % n + a;
		counter++;
		if (pogodi > sredina) {
			a = sredina;
			sredina = (n + a) / 2;

		}
		else if (pogodi < sredina) {
			n = sredina;
			sredina = (n + a) / 2;
		}

		cout << broj << endl;
	}
	cout << " Broj: " << broj << endl;
	cout << "Trebalo je " << counter << " pokusaja." << endl;

}

