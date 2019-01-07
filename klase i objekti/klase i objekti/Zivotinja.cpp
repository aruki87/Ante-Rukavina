#include "pch.h"
#include <iostream>
#include <string>
#include "Zivotinja.h"

using namespace std;

int Zivotinja::utovi(int dodatna_tezina) {
	tezina += dodatna_tezina;
	return tezina;
}

void Zivotinja::trci_brze(float brze) {
	cout << "Nova brzina: " << brzina + brze << endl;
}

string Zivotinja::promjeni_vrstu(string nova_vrsta) {
	vrsta = nova_vrsta;
	return vrsta;
}

void Zivotinja::postavi_vrstu(string vrsta1) {
	vrsta = vrsta1;
}

void Zivotinja::postavi_brzinu(int brzina1){
	brzina = brzina1;
}

void Zivotinja::ispisi_vrstu() {
	cout << vrsta << endl;
}