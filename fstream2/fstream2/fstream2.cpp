// fstream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>
#include "calc.h"
using namespace std;


void kocka() {
	int prvi;
	int drugi;
	int s = 1;
	string dane;
	string igrac1;
	string igrac2;
	string za_upisati;

	cout << "Unesite ime prvog igraca: " << endl;
	getline(cin, igrac1);
	cout << "Unesite ime drugog igraca: " << endl;
	getline(cin, igrac2);

	ofstream output;
	output.open("test.txt", ios::out);

	srand(time(NULL));
	while (s == 1) {
		cin.ignore();
		cout << "Kocku baca prvi igrac" << endl;
		cin.ignore();
		prvi = rand() % 6 + 1;
		cout << prvi << endl;
		cin.ignore();
		cout << "Kocku baca drugi igrac" << endl;
		cin.ignore();
		drugi = rand() % 6 + 1;
		cout << drugi << endl;
		cin.ignore();
		if (prvi > drugi) {
			cout << "Pobjednik je prvi igrac!" << endl;
		}
		else if (drugi > prvi) {
			cout << "Pobjednik je drugi igrac!" << endl;
		}
		else {
			cout << "Izjednaceno!" << endl;
		}
		za_upisati = igrac1 + " " + to_string(prvi) + "\t" + igrac2 + " " + to_string(drugi) + "\n";
		output << za_upisati;
		cout << "Nastaviti igru?" << endl;
		getline(cin, dane);
		if (dane == "ne") {
			s = 0;
		}
	}
	output.close();
}

void studenti() {
	string dailine = "da";
	while (dailine == "da") {
		int n;
		string prikaz;
		vector<string> studenti;
		string student[5];
		cout << "Izbornik: " << endl;
		cout << "1. Prikaz studenata\t\t" << "2. Unos studenta\t\t" << "3. Pretrazivanje po rednom broju\t\t" << "4. Izracun prosjeka grupe" << endl;
		cin >> n;
		if (n == 1) {
			ifstream input("test.txt");
			while (input) {
				getline(input, prikaz);
				studenti.push_back(prikaz);

			}
			for (int i = 0; i < studenti.size() - 1; i++) {
				cout << studenti[i] << endl;
			}
			input.close();
		}
		if (n == 2) {
			int c = -1;
			int s = 1;


			cout << "Unesite redni broj: " << endl;
			cin >> student[0];

			ifstream input("test.txt");
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
				if ((c+1) < stoi(student[0])) {
					cout << "Preskocili ste redni broj "<< endl;
					cin >> student[0];
					s = 1;
				}
			}



			input.close();
			ofstream output;
			output.open("test.txt", ios::out | ios::app);

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
		if (n == 3) {
			int rb;
			int c = 0;
			cout << "Unesite redni broj: ";
			cin >> rb;
			ifstream input("test.txt");

			while (input) {
				c++;
				getline(input, prikaz);
				if (c == rb) {
					cout << prikaz << endl;
					input.close();
				}
			}
		}
		if (n == 4) {
			ifstream input("test.txt");
			float p = 0;
			float c = 0;
			string prosjek;
			while (input) {
				c++;
				getline(input, prikaz);
				size_t pos = prikaz.find("na: ");
				if (pos == -1) {
					break;
				}
				p += stof(prikaz.substr(pos + 4, 3));

			}
			p /= c;
			cout << "Prosjek ocjena svih studenata: " << p << endl;
		}
		cout << "Nastaviti program? " << endl;
		cin >> dailine;
	}
	
	

}


int main()
{	/*
	int n;
	cin >> n;
	string za_spremiti;
	string za_ispisati;
	ofstream output;
	output.open("test.txt", ios::out);
	for (int i = 0; i < n; i++) {
		za_spremiti =to_string(i)+" ";
		output << za_spremiti;

	}
	output.close();
	ifstream input("test.txt");
	while (input) {
		getline(input, za_ispisati);
		cout << za_ispisati;
	}*/
	studenti();
	
}
