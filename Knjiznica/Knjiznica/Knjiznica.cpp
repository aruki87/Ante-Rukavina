// Knjiznica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Knjiga {
private:
	string naziv;
	string zanr;
	int isbn;
	int broj_primjeraka;
public:
	string get_naziv();
	void set_naziv(string naziv1);
	string get_zanr();
	void set_zanr(string zanr1);
	int get_isbn();
	void set_isbn(int isbn1);
	int get_broj_primjeraka();
	void set_broj_primjeraka(int broj_primjeraka1);
};

string Knjiga::get_naziv() {
	return naziv;
}

void Knjiga::set_naziv(string naziv1) {
	naziv = naziv1;
}

string Knjiga::get_zanr() {
	return zanr;
}

void Knjiga::set_zanr(string zanr1) {
	zanr = zanr1;
}

int Knjiga::get_isbn() {
	return isbn;
}

void Knjiga::set_isbn(int isbn1) {
	isbn = isbn1;
}

int Knjiga::get_broj_primjeraka() {
	return broj_primjeraka;
}

void Knjiga::set_broj_primjeraka(int broj_primjeraka1) {
	broj_primjeraka = broj_primjeraka1;
}

class Clan {
private:
	string ime;
	string prezime;
	int oib;
	vector<Knjiga*> posudjene_knjige;
public:
	string get_ime();
	void set_ime(string ime1);
	string get_prezime();
	void set_prezime(string prezime1);
	int get_oib();
	void set_oib(int oib1);
	int pronadji_knjigu(string naziv);
	void dodaj_knjigu(Knjiga* k);
	void obrisi_knjigu(int index);
	Knjiga* knjiga_po_indeksu(int index);
	int broj_knjiga();
	void ispisi_posudjene();
};

void Clan::ispisi_posudjene() {
	for (int i = 0; i < posudjene_knjige.size(); i++) {
		cout << posudjene_knjige[i]->get_naziv() << endl;
	}
}

string Clan::get_ime() {
	return ime;
}

void Clan::set_ime(string ime1) {
	ime = ime1;
}

string Clan::get_prezime() {
	return prezime;
}

void Clan::set_prezime(string prezime1) {
	prezime = prezime1;
}

int Clan::get_oib() {
	return oib;
}

void Clan::set_oib(int oib1) {
	oib = oib1;
}

int Clan::pronadji_knjigu(string naziv) {
	for (int i = 0; i < posudjene_knjige.size(); i++) {
		//posudjene_knjige[i]->set_naziv("Lolita");
		cout << posudjene_knjige[i]->get_naziv() << endl;
		if (posudjene_knjige[i]->get_naziv() == naziv) {
			return i;
		}
	}
	return -1;
}

void Clan::dodaj_knjigu(Knjiga* k) {
	posudjene_knjige.push_back(k);
}

void Clan::obrisi_knjigu(int index) {
	posudjene_knjige.erase(posudjene_knjige.begin() + index);
}

Knjiga* Clan::knjiga_po_indeksu(int index) {
	return posudjene_knjige[index];
}

int Clan::broj_knjiga() {
	return posudjene_knjige.size();
}

class Knjiznica {
private:
	vector<Knjiga> Knjige;
	vector<Clan> Clanovi;

public:
	int pronadji_knjigu(string naziv, bool vracanje);
	int pronadji_clana(int oib);
	void posudi_knjigu(string naziv, int oib);
	void vrati_knjigu(string naziv, int oib);
	void stavi_u_knjiznicu();
	void registriraj_clana();
	void gurni_knjigu(Knjiga k);
	void gurni_clana(Clan c);
	Knjiga adresa_knjige(int isbn);
	Knjiga knjiga_po_indeksu(int index);
	Clan clan_po_indeksu(int index);
	int broj_knjiga();
	int broj_clanova();
	void ispisi_clanove();
	void ispisi_knjige();
	void ispisi_posudjene();
};

void Knjiznica::ispisi_posudjene() {
	for (int i = 0; i < broj_clanova(); i++) {
		Clanovi[i].ispisi_posudjene();
	}
}

int Knjiznica::pronadji_knjigu(string naziv, bool vracanje) {
	for (int i = 0; i < Knjige.size(); i++) {
		if (Knjige[i].get_naziv() == naziv) {
			if (Knjige[i].get_broj_primjeraka() > 0) {
				cout << "Knjiga je nadjena!" << endl;
				return i;
			}
			else if(!vracanje){
				cout << "Svi primjerci knjige su posudjeni!" << endl;
				return -1;
			}
			else {
				return i;
			}
		}
	}
	return -1;
	cout << "Knjiznica nema tu knjigu!" << endl;
}

int Knjiznica::pronadji_clana(int oib) {
	for (int i = 0; i < Clanovi.size(); i++) {
		if (Clanovi[i].get_oib() == oib) {
			//cout << "Pronadjen je clan!" << endl;
			return i;
		}
	}
	//cout << "Taj clan ne postoji!" << endl;
	return -1;
}

void Knjiznica::stavi_u_knjiznicu() {
	string naziv;
	int broj;
	cout << "Ime knjige: ";
	cin.ignore();
	getline(cin, naziv);
	if (pronadji_knjigu(naziv, true)<0) {
		Knjiga k;
		k.set_naziv(naziv);
		cout << endl;
		cout << "Zanr knjige: ";
		cin.ignore();
		getline(cin, naziv);
		k.set_zanr(naziv);
		cout << endl;
		cout << "ISBN: ";
		cin >> broj;
		k.set_isbn(broj);
		cout << endl;
		cout << "Broj primjeraka: ";
		cin.ignore();
		cin >> broj;
		k.set_broj_primjeraka(broj);
		cout << endl;
		Knjige.push_back(k);
		cout << "Knjiga " << k.get_naziv() << " je stavljena u knjiznicu!" << endl;
	}
	else {
		cout << "Ta knjiga vec postoji!" << endl;
	}
}

void Knjiznica::registriraj_clana() {
	string naziv;
	int broj;
	cout << "OIB clana: ";
	cin.ignore();
	cin >> broj;
	cout << endl;
	if (pronadji_clana(broj)<0) {
		Clan c;
		c.set_oib(broj);
		cout << "Ime clana: ";
		cin.ignore();
		getline(cin, naziv);
		c.set_ime(naziv);
		cout << endl;
		cout << "Prezime clana: ";
		cin.ignore();
		getline(cin, naziv);
		c.set_prezime(naziv);
		cout << endl;
		Clanovi.push_back(c);
		cout << "Clan pod imenom " << c.get_ime() << " je registriran" << endl;
	}
	else {
		cout << "Taj clan vec postoji!" << endl;
	}
}

void Knjiznica::posudi_knjigu(string naziv, int oib) {
	int k_index = pronadji_knjigu(naziv, false);
	int c_index = pronadji_clana(oib);
	if (k_index > -1 && c_index > -1 ) {
		if (Clanovi[c_index].pronadji_knjigu(naziv)< 0) {
			Knjige[k_index].set_broj_primjeraka(Knjige[k_index ].get_broj_primjeraka() - 1);
			Clanovi[c_index].dodaj_knjigu(&Knjige[k_index]);
			cout << "Clan pod imenom " << Clanovi[c_index].get_ime() << " je posudio knjigu " << Knjige[k_index].get_naziv() << endl;
		}
		else {
			cout << "Clan je vec posudio tu knjigu!" << endl;
		}
	}
	if (c_index == -1) {
		cout << "Niste clan knjiznice!" << endl;
	}
	else if (k_index == -1) {
		cout << "Nema te knjige za posuditi!" << endl;
	}
}

void Knjiznica::vrati_knjigu(string naziv, int oib) {
	int k_index = pronadji_knjigu(naziv, true);
	cout << "K_index: " << k_index << endl;
	int c_index = pronadji_clana(oib);
	cout << "K_index: " << k_index << endl;
	int p_index = Clanovi[c_index].pronadji_knjigu(naziv);
	cout << "K_index: " << k_index << endl;
	if (c_index>-1) {
		if (Clanovi[c_index].pronadji_knjigu(naziv)>-1) {
			
			Knjige[k_index].set_broj_primjeraka(((Knjige[k_index].get_broj_primjeraka()) + 1));
			
			Clanovi[c_index].obrisi_knjigu(p_index);
			
			//cout << "Clan pod imenom " << Clanovi[c_index].get_ime() << " je vratio knjigu " << Knjige[k_index].get_naziv() << endl;
		}
		else {
			cout << "Clan nije posudio tu knjigu!" << endl;
		}
	}
}

void Knjiznica::gurni_knjigu(Knjiga k) {
	Knjige.push_back(k);
}

void Knjiznica::gurni_clana(Clan c) {
	Clanovi.push_back(c);
}

Knjiga Knjiznica::adresa_knjige(int isbn) {
	for (int i = 0; i < Knjige.size(); i++) {
		if (Knjige[i].get_isbn() == isbn) {
			
			return Knjige[i];
		}
	}
}

Knjiga Knjiznica::knjiga_po_indeksu(int index) {
	return Knjige[index];
}

Clan Knjiznica::clan_po_indeksu(int index) {
	return Clanovi[index];
}

int Knjiznica::broj_knjiga() {
	return Knjige.size();
}

int Knjiznica::broj_clanova() {
	return Clanovi.size();
}

void Knjiznica::ispisi_clanove() {
	for (int i = 0; i < Clanovi.size(); i++) {
		cout << Clanovi[i].get_ime() << " " << Clanovi[i].get_prezime() << " " << Clanovi[i].get_oib() << endl;
	}
}

void Knjiznica::ispisi_knjige() {
	for (int i = 0; i < Knjige.size(); i++) {
		cout << Knjige[i].get_naziv() << " " << Knjige[i].get_zanr() << " " << Knjige[i].get_isbn() << endl;
	}
}

class FileIO {
public:
	void napuni_knjiznicu(Knjiznica &knjiznica);
	void zapisi_u_datoteku(Knjiznica knjiznica);
};

void FileIO::napuni_knjiznicu(Knjiznica &knjiznica) {

	string knjiga;
	string temp;
	int counter;
	int r = 0;
	ifstream input("knjige.txt");
	while (input) {
		counter = 0;
		Knjiga k;
		getline(input, knjiga);
		for (int i = 0; i < knjiga.size(); i++) {
			if (knjiga[i] != ':') {
				temp += knjiga[i];
			}
			else {
				if (counter == 0) {
					k.set_naziv(temp);
				}
				if (counter == 1) {
					k.set_zanr(temp);
				}
				if (counter == 2) {
					k.set_isbn(stoi(temp));
				}
				if (counter == 3) {
					k.set_broj_primjeraka(stoi(temp));
				}
				//cout << temp << endl;
				temp = "";
				counter++;
			}
		}
		if (k.get_naziv() == "") {
			break;
		}
		knjiznica.gurni_knjigu(k);
		cout << knjiznica.knjiga_po_indeksu(r).get_naziv() << endl;
		r++;
	}
	input.close();
	r = 0;
	temp = "";
	string clan;
	ifstream input2("clanovi.txt");
	while (input2) {
		counter = 0;
		Clan c;
		getline(input2, clan);
		for (int i = 0; i < clan.size(); i++) {
			if (clan[i] != ':') {
				temp += clan[i];
			}
			else {
				if (counter == 0) {
					c.set_ime(temp);
				}
				if (counter == 1) {
					c.set_prezime(temp);
				}
				if (counter == 2) {
					c.set_oib(stoi(temp));
				}
				if (counter > 2) {
					c.dodaj_knjigu(&knjiznica.adresa_knjige(stoi(temp)));
				}
				//cout << temp << endl;
				
				temp = "";
				counter++;
			}
		}
		if (c.get_ime() == "") {
			break;
		}
		//cout << c.get_ime()<< endl;
		//cout << c.get_prezime() << endl;
		//cout << c.get_oib() << endl;
		knjiznica.gurni_clana(c);
		cout << knjiznica.clan_po_indeksu(r).get_ime() << endl;
		r++;
	}
	input2.close();

}

void FileIO::zapisi_u_datoteku(Knjiznica knjiznica) {
	ofstream output1("knjige.txt");
	for (int i = 0; i < knjiznica.broj_knjiga(); i++) {
		Knjiga k = knjiznica.knjiga_po_indeksu(i);
		output1 << k.get_naziv();
		output1 << ":";
		output1 << k.get_zanr();
		output1 << ":";
		output1 << k.get_isbn();
		output1 << ":";
		output1 << k.get_broj_primjeraka();
		output1 << ":";
		output1 << "\n";
	}
	output1 << "\n";
	output1.close();

	ofstream output2("clanovi.txt");
	for (int i = 0; i < knjiznica.broj_clanova(); i++) {
		Clan c = knjiznica.clan_po_indeksu(i);
		output2 << c.get_ime();
		output2 << ":";
		output2 << c.get_prezime();
		output2 << ":";
		output2 << c.get_oib();
		output2 << ":";
		for (int j = 0; j < c.broj_knjiga(); j++) {
			output2 << c.knjiga_po_indeksu(j)->get_isbn();
			output2 << ":";
		}
		output2 << "\n";
	}
	output2 << "\n";
	output2.close();
}

void izbornik() {
	Knjiznica k;
	FileIO file;
	file.napuni_knjiznicu(k);
	k.ispisi_posudjene();
	//cout << k.broj_clanova() << endl;
	//k.ispisi_knjige();
	//k.ispisi_clanove();
	bool nastavi = true;
	int izbor;
	string knjiga;
	int oib;
	string dane;
	while (nastavi) {
		cout << "1. Registriraj clana\t" << "2. Stavi u knjiznicu\t" << "3. Posudi knjigu\t" << "4. Vrati knjigu\t" << endl;
		cin >> izbor;
		if (izbor == 1) {
			k.registriraj_clana();
		}
		if (izbor == 2) {
			k.stavi_u_knjiznicu();
		}
		if (izbor == 3) {
			cout << "Koju knjigu zelite posuditi?" << endl;
			cin.ignore();
			getline(cin, knjiga);
			cout << "Koji je vas OIB?" << endl;
			cin >> oib;
			cout << oib;
			k.posudi_knjigu(knjiga, oib);
		}
		if (izbor == 4) {
			cout << "Koju knjigu zelite vratiti?" << endl;
			cin.ignore();
			getline(cin, knjiga);
			
			cout << "Koji je vas OIB?" << endl;
			cin >> oib;
			k.vrati_knjigu(knjiga, oib);
		}
		cout << "Zavrsi?" << endl;
		cin >> dane;
		if (dane == "da") {
			nastavi = false;
		}

	}
}



int main(){
	
	izbornik();
}


