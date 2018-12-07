// random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int r;
	int pokusaj=0;
	string poruka = "da";

	srand(time(NULL));

	/*while (poruka == "da") {
		r = rand() % 2 + 1;
		if (r == 2) {
			cout << "Pismo" << endl;
		}
		else {
			cout << "Glava" << endl;
		}
		cout << "Pokusati ponovno?" << endl;
		cin >> poruka;
		cout << endl;
	}*/
	/*int c = 1;
	r = rand() % 100 + 1;
	cout << "Probajte pogoditi broj: " << endl;
	
	while (pokusaj != r) {
		cin >> pokusaj;
		if (pokusaj > r) {
			cout << "Vas broj je veci od trazenog!" << endl << "Pokusajte ponovno.\n";
			c++;
		}
		else if (pokusaj < r) {
			cout << "Vas broj je manji od trazenog!"<< endl << "Pokusajte ponovno.\n";
			c++;
		} 
		else {
			cout << "Cestitamo pogodili ste broj" << endl;
			cout << "Trebalo vam je " << c << " pokusaja!\n";
		}
		
	}*/

	/*int r1 = 1;
	int r2, r3, rucka;
	while (r1!=5) {
		cout << "Povucite rucku" << endl;
		cin >> rucka;
		r1 = rand() % 4 + 1;
		r2 = rand() % 4 + 1;
		r3 = rand() % 4 + 1;
		cout << r1 << "  " << r2 << "  " << r3 << endl;
		if ((r1 == r2) && (r2 == r3)) {
			cout << "Cestitamo osvojili ste nagradu!" << endl;
			r1 = 5;
		}
		else {
			cout << "Pokusajte ponovno!" << endl;
		}
	}*/
	

	



}

