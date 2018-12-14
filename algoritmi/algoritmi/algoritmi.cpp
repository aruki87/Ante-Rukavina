// algoritmi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int indeks(vector<string> pojmovi, string trazeni_pojam) {
	int size = 0;
	for (int i = 0; i < pojmovi.size(); i++) {
		
		if (pojmovi[i] == " "+trazeni_pojam) {
			
			return size;
		}
		size += (pojmovi[i].size() + 2);
	}
}
vector<int> svi_indeksi(vector<string> pojmovi, string trazeni_pojam) {
	int size = 0;
	vector<int> indeksi;
	for (int i = 0; i < pojmovi.size(); i++) {

		if (pojmovi[i] == " " + trazeni_pojam) {

			indeksi.push_back(size);
		}
		size += (pojmovi[i].size() + 2);
	}
	return indeksi;
}


int main()
{
	string pojmovi_s;
	vector<string> pojmovi;
	vector<int> indeksi;
	string trazeni_pojam;
	cout << "Unesite pojam: " << endl;
	getline(cin, trazeni_pojam);
	ifstream input("pojmovi.txt");
	while (input) {
		getline(input, pojmovi_s, ',');
		pojmovi.push_back(pojmovi_s);
	}
	
	//cout << indeks(pojmovi, trazeni_pojam);
	indeksi = svi_indeksi(pojmovi, trazeni_pojam);
	for (int i = 0; i < indeksi.size(); i++) {
		cout << indeksi[i] << endl;
	}


}

