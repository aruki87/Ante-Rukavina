// unos_studenata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



void ispisStudenata() {
	vector<string> studenti;
	string prikaz;
	ifstream input("studenti.txt");
	while (input) {
		getline(input, prikaz);
		studenti.push_back(prikaz);

	}
	for (int i = 0; i < studenti.size() - 1; i++) {
		cout << studenti[i] << endl;
	}
	input.close();
}

void upisStudenata() {
	int c = -1;
	int s = 1;
	string student[5];
	string prikaz;

	cout << "Unesite redni broj: " << endl;
	cin >> student[0];

	ifstream input("studenti.txt");
	while (s == 1) {
		s = 0;

		while ((input)) {
			c++;
			getline(input, prikaz);

		}
		if (c >= stoi(student[0])) {
			cout << "Taj redni broj vec postoji, unesite drugi: " << endl;
			cin >> student[0];
			s = 1;
		}
		if ((c + 1) < stoi(student[0])) {
			cout << "Preskocili ste redni broj " << endl;
			cin >> student[0];
			s = 1;
		}
		
	}



	input.close();
	ofstream output;
	output.open("studenti.txt", ios::out | ios::app);

	output << student[0] + ".\t";
	cout << "Unesite ime: " << endl;
	cin >> student[1];
	output << "Ime: " << student[1] + "\t\t";
	cout << "Unesite prezime: " << endl;
	cin >> student[2];
	output << "Prezime: " << student[2] + "\t\t";
	cout << "Unesite prosjecnu ocjenu: " << endl;
	cin >> student[3];
	output << "Prosjecna ocjena: " << student[3] + "\t";
	cout << "Unesite broj polozenih ECTS-a: " << endl;
	cin >> student[4];
	output << "Broj polozenih ECTS-a: " << student[4] << endl;
}

void izbornik() {

	int n;
	cout << "1. Unos studenata\t" << "2. Ispis studenata\t" << "3. Sortiranje po imenu\t" << "4. Sortiranje po prezimenu\t" << "5. Sortiranje po prosjeku" << endl;
	cin >> n;
	if (n == 1) {
		upisStudenata();
	}
	if (n == 2) {
		ispisStudenata();
	}
	if (n == 3) {

	}
	if (n == 4) {

	}
	if (n == 5) {

	}
}

int main()
{
	izbornik();
}

