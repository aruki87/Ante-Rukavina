// Strukture podataka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <string> 
#include <stack> 
#include <queue>
#include <map>

using namespace std;


void palindrom(string recenica) {
	stack <char> stog;
	string obrnuto = "";

	recenica.erase(remove_if(recenica.begin(), recenica.end(), isspace), recenica.end());
	
	for (int i = 1; i <= recenica.size(); i++) {
		
		stog.push(recenica[i - 1]);
		
	}
	
	for (int i = 1; i <= recenica.size(); i++, stog.pop()) {
		obrnuto += stog.top();
	}
	
	if (recenica == obrnuto) {
		cout << "Recenica je palindrom!" << endl;
	}
	else {
		cout << "Recenica nije palindrom!" << endl;
	}
}

void  unosPacijenata(queue <string>  &red) {
	int sw = 1;
	string pacijent;
	while (sw) {
		cout << "Ulazi pacijent pod imenom: ";
		getline(cin, pacijent);
		if (pacijent == "0") {
			sw = 0;
		}
		else {
			red.push(pacijent);
		}

	}

}
void ulazakPacijenata(queue <string>  &red, string &pacijent) {
	pacijent = red.front();
	red.pop();

}

void cekaonica(queue <string>  &red) {
	unosPacijenata(red);
	string ulazak;
	string pacijent;
	int sw = 1;
	cin >> ulazak;
	while ((ulazak != "0")&&(sw)) {
		ulazakPacijenata(red, pacijent);
		
		if (!(red.empty())) {
			cout << "Trenutno kod doktora je: " << pacijent << endl;
			cout << "Slijedeci na redu je: " << red.front() << endl;
		}
		else {
			cout << "Slijedeci na redu je: nitko" << endl;
			ulazak = "0";
			sw = 0;
		}
		
		cin >> ulazak;
	}

}

void karte(map<int, string> &spil) {
	

}

int main()
{
	/*
	string recenica;
	cout << "Unesite recenicu: " << endl;
	getline(cin, recenica);
	palindrom(recenica);*/
	/*
	queue <string>  red;
	cekaonica(red);
	cout << "Naruceni za sutra su: " << endl;
	while (!(red.empty())) {
		cout << red.front() << endl;
		red.pop();
	}*/
	map<int, string> spil;
	spil.insert(make_pair(1, "As"));
	for (int i = 2; i < 11; i++) {
		spil.insert(make_pair(i, to_string(i)));
	}

}

