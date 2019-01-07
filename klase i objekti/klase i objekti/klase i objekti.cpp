#include "pch.h"
#include <iostream>
#include <string>
#include "Zivotinja.h"
#include <vector>
using namespace std;

class Kutija {
public:
	int x;
	void ispis();
};

void Kutija::ispis() {
	cout << x << endl;
}

class Covjek {
public:
	int visina;
	string boja_ociju;
	int tezina;
	int narasti(int rast);
	string promjeni_boju_ociju(string boja);
	int smrsavi(int gubitak_tezine);

};


int Covjek::narasti(int rast) {
	visina = visina + rast;
	return visina;
}

string Covjek::promjeni_boju_ociju(string nova_boja) {
	boja_ociju = nova_boja;
	return boja_ociju;
}

int Covjek::smrsavi(int gubitak_tezine) {
	tezina -= gubitak_tezine;
	return tezina;
}

class Kocka {
private:
	int visina;
	int sirina;
	int dubina;
	bool otvoreno;
public:
	void otvori();
	void zatvori();
	void jeli_otvoreno();
	Kocka();
};

Kocka::Kocka() {
	otvoreno = false;
}

void Kocka::otvori() {
	otvoreno = true;
}

void Kocka::zatvori() {
	otvoreno = false;
}

void Kocka::jeli_otvoreno() {
	if (otvoreno) {
		cout << "Kocka je otvorena" << endl;
	}
	else {
		cout << "Kocka je zatvorena" << endl;
	}
}


class Auto {
private:
	string marka;
	string model;
	int broj_sasije;
	bool upaljen=false;
	int brzina;
public:
	static int broj_automobila;
	static void koliko_automobila();
	void upali();
	void ugasi();
	void ubrzaj(int ubzanje);
	void uspori(int usporanje);
	void ispisi_brzinu();
	void postavi_marku(string marka_auta);
	void postavi_model(string model_auta);
	void postavi_sasiju(int sasija);
	void opisi_auto();
	Auto();

};

int Auto::broj_automobila = 0;


void Auto::koliko_automobila() {

	cout << "Broj automobila: " << broj_automobila << endl;
}

Auto::Auto() {
	broj_automobila++;
	brzina = 0;
}
void Auto::upali() {
	upaljen = true;
}
void Auto::ugasi() {
	upaljen = false;
}

void Auto::ubrzaj(int ubrzanje){
	if (upaljen) {
		brzina += ubrzanje;
	}
	else {
		cout << "Auto je ugasen!" << endl;
	}
}
void Auto::uspori(int usporanje) {
	if (upaljen) {
		if (brzina > 0) {
			brzina -= usporanje;
		}
		else {
			cout << "Auto ne vozi!" << endl;
		}
	}
	else {
		cout << "Auto je ugasen!" << endl;
	}
}

void Auto::ispisi_brzinu() {
	if (upaljen) {
		cout << "Brzina " << model << " " << marka << " " << "vozi brzinom od " << brzina << " km/h." << endl;
	}
	else {
		cout << "Auto je ugasen!" << endl;
	}
	
}

void Auto::postavi_model(string model_auta) {
	model = model_auta;
}

void Auto::postavi_marku(string marka_auta) {
	marka = marka_auta;
}

void Auto::postavi_sasiju(int sasija) {
	broj_sasije = sasija;
}

void Auto::opisi_auto() {
	cout << "Marka: " << marka << " Model: " << model << " Broj sasije: " << broj_sasije << endl;
}

int main()
{
	/*
	Kutija box;
	box.x = 100;
	box.ispis();*/
	/*
	Covjek janko;
	janko.visina = 180;
	janko.boja_ociju = "zelena";
	janko.tezina = 80;
	cout << janko.tezina << endl;
	cout << janko.boja_ociju << endl;
	janko.narasti(15);
	cout << janko.visina << endl;
	janko.promjeni_boju_ociju("plava");
	cout << janko.boja_ociju << endl;
	janko.smrsavi(5);
	cout << janko.tezina << endl;
	Zivotinja Maca;
	Maca.postavi_vrstu( "Macka");
	Maca.promjeni_vrstu("Konj");
	Maca.postavi_brzinu (20);
	Maca.trci_brze(25);
	Maca.ispisi_vrstu();*/
	/*
	Kocka kocka1;
	kocka1.otvori();
	//kocka1.zatvori();
	kocka1.jeli_otvoreno();*/

	
	vector<Auto> auti;
	Auto auto1;
	Auto::koliko_automobila();
	Auto auto2;
	Auto::koliko_automobila();
	Auto auto3;
	Auto::koliko_automobila();
	auti.push_back(auto1);
	auti.push_back(auto2);
	auti.push_back(auto3);

	auto1.postavi_marku("Peugeot");
	auto1.postavi_model("206");
	auto1.postavi_sasiju(123);
	auto1.opisi_auto();
	auto1.upali();
	auto1.ispisi_brzinu();
	auto1.ubrzaj(100);
	auto1.ispisi_brzinu();
	auto1.uspori(20);
	auto1.ispisi_brzinu();
	auto1.uspori(80);
	auto1.uspori(10);
	auto1.ugasi();
	auto1.ispisi_brzinu();

	

}


