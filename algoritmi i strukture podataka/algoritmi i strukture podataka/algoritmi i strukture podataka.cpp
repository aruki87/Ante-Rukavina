// algoritmi i strukture podataka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
#include <string>

using namespace std;

struct pacijent {
	int mbo;
	string ime;
	string prezime;
	vector<string> popisLijekova;

};

void shellSort(vector<pacijent> &Pacijenti, int n){

	for (int gap = n / 2; gap > 0; gap /= 2){
		for (int i = gap; i < n; i++){

			pacijent temp = Pacijenti[i];
			int j;
			for (j = i; j >= gap && Pacijenti[j - gap].mbo > temp.mbo; j -= gap) {
				Pacijenti[j] = Pacijenti[j - gap];
			}
			Pacijenti[j] = temp;
			
			
		}
	}
}

int binarnoPretrazivanje(vector<pacijent> Pacijenti, int pocetak, int kraj, int mbo) {
	
	if (pocetak <= kraj) {
		int sredina = (pocetak + kraj) / 2; 
		if (mbo == Pacijenti[sredina].mbo) {
			return sredina;   
		}
		else if (mbo < Pacijenti[sredina].mbo) {
			return binarnoPretrazivanje(Pacijenti, pocetak, sredina - 1, mbo);
		}
		else {
			return binarnoPretrazivanje(Pacijenti, sredina + 1, kraj, mbo);
		}
			
	}
	return -1;   
}

int nadjiPoziciju(string s, char t, int n){
	int count = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == t){
			count++;
			if (count == n){
				return i;
			}
		}
	}
	return -1;
}

void unosPacijenata(vector<pacijent> &sviPacijenti) {

	
	string lijek;
	pacijent unos;
	int postoji = 0;
	
	cout << "Unesite MBO pacijenta" << endl;
	cin >> unos.mbo; 
	cout << "Unesite pacijentovo ime" << endl;
	cin.ignore();
	getline(cin, unos.ime);
	cout << "Unesite pacijentovo prezime" << endl;
	getline(cin, unos.prezime);
	cout << "Unesite pacijentove lijekove" << endl;
	getline(cin, lijek);
	while (lijek != "0") {
		unos.popisLijekova.push_back(lijek);
		cout << "Unesite pacijentove lijekove" << endl;
		getline(cin, lijek);
	}

	for (int i = 0; i < sviPacijenti.size(); i++) {
		if (sviPacijenti[i].mbo == unos.mbo) {
			postoji = 1;
		}
	}

	if (!postoji) {
		sviPacijenti.push_back(unos);
		
		shellSort(sviPacijenti, sviPacijenti.size());
		
		ofstream output;

		output.open("kartoteka.txt", ios::out );
		for (int i = 0; i < sviPacijenti.size(); i++) {
			output << sviPacijenti[i].mbo;
			output << " ";
			output << sviPacijenti[i].ime;
			output << " ";
			output << sviPacijenti[i].prezime;
			output << " ";
			for (int j = 0; j < sviPacijenti[i].popisLijekova.size(); j++) {
				output << sviPacijenti[i].popisLijekova[j];
				cout << sviPacijenti[i].popisLijekova[j] << endl;
				output << " ";
			}
			output << "\r\n";
		}
		
		output.close();
		
	}
	else {
		cout << "Taj pacijent vec postoji!" << endl;
		
	}

}

void ispisPacijenata() {
	string pacijent;
	ifstream input("kartoteka.txt");
	while (input) {
		getline(input, pacijent);
		cout << pacijent << endl;
	}
	input.close();
}

void pretragaPacijenata(vector<pacijent> Pacijenti) {
	int mbo;
	cout << "Unesite MBO koji zelite naci." << endl;
	cin >> mbo;
	mbo = binarnoPretrazivanje(Pacijenti, 0, Pacijenti.size(), mbo);
	if (mbo < 0) {
		cout << "Nema tog pacijenta u popisu!";
	}
	else {
		cout << Pacijenti[mbo].mbo << " " << Pacijenti[mbo].ime << " " << Pacijenti[mbo].prezime << " ";
		for (int i = 0; i < Pacijenti[mbo].popisLijekova.size(); i++) {
			cout << Pacijenti[mbo].popisLijekova[i] << " ";
		}
		cout << endl;

	}
	
}




 int main() {

	int izbor;
	string pomocni;
	
	vector<pacijent> sviPacijenti;
	string temp;
	ifstream input("kartoteka.txt");
	size_t pos;
	while (input) {
		pacijent Pacijenti;
		getline(input, temp);
		pos = temp.find(" ");
		if (pos == -1) {
			break;
		}
		Pacijenti.mbo = stoi(temp.substr(0, pos));

		for (int i = 1; nadjiPoziciju(temp, ' ', i + 1) != -1; i++) {
			pomocni = temp.substr(nadjiPoziciju(temp, ' ', i) + 1, nadjiPoziciju(temp, ' ', i + 1) + 1 - nadjiPoziciju(temp, ' ', i) - 2);
			if (i == 1) {
				Pacijenti.ime = pomocni;
			}
			else if (i == 2) {
				Pacijenti.prezime = pomocni;
			}
			else {

				Pacijenti.popisLijekova.push_back(pomocni);
				
			}
		}
		sviPacijenti.push_back(Pacijenti);
	}
	input.close();

	cout << "1. Unos pacijenata u kartoteku\t" << "2. Ispis pacijenata\t" << "3. Pretraga po MBO\t" << "4. Cekaonica\t" << "5. Dodavanje recepata za lijekove" << endl;
	cin >> izbor;
	if (izbor == 1) {
		unosPacijenata(sviPacijenti);
	}
	if (izbor == 2) {
		ispisPacijenata();
	}
	if (izbor == 3) {
		pretragaPacijenata(sviPacijenti);
	}
	if (izbor == 4) {

	}
	if (izbor == 5) {

	}

}

