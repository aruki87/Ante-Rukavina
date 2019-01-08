// oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Sef {
private:
	int kolicina_novca;
	int sifra;
	int pokusaj;
	bool otvoren;
	void unesi_sifru();

public:
	Sef();
	void otvori_sef();
	void zatvori_sef();
	int get_koliko_u_sefu();
	void set_koliko_u_sefu(int iznos);
};

Sef::Sef() {
	otvoren = false;
	sifra = 1234;
	kolicina_novca = 10000;
}

int Sef::get_koliko_u_sefu() {
	return kolicina_novca;
}

void Sef::set_koliko_u_sefu(int iznos) {
	kolicina_novca -= iznos;
}

void Sef::unesi_sifru() {
	while (pokusaj != sifra) {
		cout << "Unesite sifru: ";
		cin >> pokusaj;
		cout << endl;
		if (pokusaj == sifra) {
			cout << "Tocna sifra!" << endl;
			otvoren = true;
		}
		else {
			cout << "Pogresna sifra, pokusajte ponovno!" << endl;
		}
	}
}

void Sef::otvori_sef() {
	unesi_sifru();
	
}

void Sef::zatvori_sef() {
	otvoren = false;
}

class Banka {
private:
	Sef s;
	vector<Stedni> korisnici;
	bool jeli_korisnik(int broj_racuna);
public:
	int podigni_novac(int broj_racuna, int iznos);
	void napravi_racun(int broj_racuna, int iznos, string tip);
	int stanje_racuna(int broj_racuna);
};

void Banka::napravi_racun(int broj_racuna, int iznos, string tip) {
	if (tip == "stedni") {
		Stedni novi;
		novi.set_stanje(iznos);
		novi.set_broj(broj_racuna);
		korisnici.push_back(novi);
	}
	
	
}

bool Banka::jeli_korisnik(int broj_racuna) {
	for (int i = 0; i < korisnici.size(); i++) {
		if (korisnici[i].get_broj() == broj_racuna) {
			return true;
		}
	}
	return false;
}

int Banka::stanje_racuna(int broj_racuna) {
	for (int i = 0; i < korisnici.size(); i++) {
		if (korisnici[i].get_broj() == broj_racuna) {
			return korisnici[i].get_stanje();
		}
	}
}

int Banka::podigni_novac(int broj_racuna, int iznos) {
	if (jeli_korisnik(broj_racuna)&&stanje_racuna(broj_racuna)>iznos) {
		if (s.get_koliko_u_sefu > iznos) {
			s.set_koliko_u_sefu(iznos);
			for (int i = 0; i < korisnici.size(); i++) {
				if (korisnici[i] == broj_racuna) {
					korisnici[i].set_stanje(korisnici[i].get_stanje() - iznos);
				}
			}
			cout << "Podigli ste " << iznos << " kuna." << endl;
			return iznos;
		}
		else {
			cout << "U banci nema dovoljno novca, pokusajte drugi iznos." << endl;
			return 0;
		}
	}
	else if(!jeli_korisnik) {
		cout << "Niste korisnik banke ili ste dali krivi oib." << endl;
		return 0;
	}
	else {
		cout << "Nemate dovoljno sredstava na racunu." << endl;
	}
}

class Racun {
protected:
	int broj_racuna;
	int stanje_racuna;
public:
	int get_stanje();
	void set_stanje(int iznos);
	int get_broj();
	void set_broj(int broj);
};

int Racun::get_stanje() {
	return stanje_racuna;
}

void Racun::set_stanje(int iznos) {
	stanje_racuna = iznos;
}

int Racun::get_broj() {
	return broj_racuna;
}

void Racun::set_broj(int broj) {
	broj_racuna = broj;
}

class Tekuci : public Racun {
private:
	float dopusteni_minus;
	float kamata;
public:
	Tekuci();
};

class Stedni : public Racun {
private:
	float kamata;
	int oroceno_vrijeme;
public:
	Stedni();
};

Tekuci::Tekuci() {
	dopusteni_minus = 1000;
	kamata = 0.0005;
}

Stedni::Stedni() {
	kamata = 0.05;
	oroceno_vrijeme = 1200;
}


int main()
{
	Banka b;
	b.napravi_racun(123, 1000, "stedni");
	b.podigni_novac(123, 200);
}

