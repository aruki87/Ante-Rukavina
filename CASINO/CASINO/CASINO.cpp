// CASINO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct igrac {
	string ime;
	int novac;
	int broj_chipova;

};

string ispisi(string text) {
	string rezultat;
	int counter = 0;
	ifstream input(text+".txt");
	cout << "HIGHSCORE " << text <<": " << endl;
	while ((input) && (counter < 3)) {
		counter++;
		getline(input, rezultat);
		
		cout << rezultat << endl;
	}
	input.close();
	return "D";
}

void upisi(int highscore[] , int index , string text, string ime) {
	string rezultat;
	int counter = 0;
	int b1, b2, b3, b4, temp;
	int br[4];
	string im[4];
	string h1, h2, h3, h4, temps;
	string converter;
	ifstream input(text + ".txt");
	size_t pos = 0;
	while (input) {
		
		getline(input, rezultat);
		pos = rezultat.find(":");
		
	
		if (counter == 0) {
			b1 = stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			h1 = rezultat.substr(0, pos - 1);
			cout << "ispis b1: " << b1;
			br[0]= stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			im[0]= rezultat.substr(0, pos - 1);
		}
		else if (counter == 1) {
			b2 = stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			h2 = rezultat.substr(0, pos - 1);
			cout << "ispis b2: " << b2;
			br[1] = stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			im[1] = rezultat.substr(0, pos - 1);
		}
		else if (counter == 2) {
			b3 = stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			h3 = rezultat.substr(0, pos - 1);
			cout << "ispis b3: "<<b3;	
			br[2] = stoi(rezultat.substr(pos + 2, rezultat.size() - pos));
			im[2] = rezultat.substr(0, pos - 1);
		}
		counter++;
	}
	input.close();
	br[3] = highscore[index];
	im[3] = ime;
	int n = 4;
	for (int i = 1; i < n; i++) {
		for (int j = n - i; j > -1; j--) {
			temp = 0;
			if (br[j] > br[j - 1]) {
				temp = br[j - 1];
				br[j - 1] = br[j];
				br[j] = temp;
				temps = im[j - 1];
				im[j - 1] = im[j];
				im[j] = temps;
			}
		}
	}
	
	/*
		if (highscore[index] > b3) {
			temp = b3;
			b3 = highscore[index];
			b4 = temp;
			temps = h3;
			h3 = ime;
			h4 = temps;
		}
		else {
			b4= highscore[index];
			h4 = ime;
		}
		if (b3 > b2) {
			temp = b2;
			b2 = b3;
			b3 = temp;
			temps = h2;
			h2 = h3;
			h3 = temps;
		}
		if (b2 > b1) {
			temp = b1;
			b1 = b2;
			b2 = temp;
			temps = h1;
			h1 = h2;
			h2 = temps;
		}
		if (b4 > b3) {
			temp = b3;
			b3 = b4;
			b4 = temp;
			temps = h3;
			h3 = h4;
			h4 = temps;
		}
		if (b3 > b2) {
			temp = b2;
			b2 = b3;
			b3 = temp;
			temps = h2;
			h2 = h3;
			h3 = temps;
		}
		if (b4 > b3) {
			temp = b3;
			b3 = b4;
			b4 = temp;
			temps = h1;
			h1 = h2;
			h2 = temps;
		}*/
		
		ofstream output(text + ".txt");
		//converter = to_string(b1);
		/*h1 = h1 + " : " + converter;
		output <<h1 + "\n"; 
		converter = to_string(b2);
		h2 = h2 + " : " + converter;
		output << h2 + "\n";
		converter = to_string(b2);
		h3 = h3 + " : " + converter;
		output << h3 + "\n";*/
		for (int i = 0; i < 3; i++) {
			converter = to_string(br[i]);
			im[i] += " : " + converter;
			cout << im[i];
			output << im[i] + "\n";
		}
		
		output.close();
	
	

	
}

int jednoruki_jack(int* broj_chipova, int highscore[], string ime) {
	int chip1 = 0;
	int chip2 = 0;
	string dailine;
	dailine = "da";
	
	while (((dailine == "da") || (dailine == "DA") || (dailine == "Da"))) {
		cout << "Koliko chip-ova zelite uloziti?" << endl;
		cin >> chip2;
		if (*broj_chipova >= chip2) {

			int a = 0;
			int b = 0;
			int c = 0;
			char a1, b1, c1;
			cout << "Povucite rucku!" << endl;
			cin.ignore();
			cin.ignore();
			a = rand() % 4 + 1;
			b = rand() % 4 + 1;
			c = rand() % 4 + 1;
			if (a == 1) {
				a1 = '+';
			}
			else if (a == 2) {
				a1 = 'X';
			}
			else if (a == 3) {
				a1 = 'O';
			}
			else {
				a1 = '*';
			}
			if (b == 1) {
				b1 = '+';
			}
			else if (b == 2) {
				b1 = 'X';
			}
			else if (b == 3) {
				b1 = 'O';
			}
			else {
				b1 = '*';
			}
			if (c == 1) {
				c1 = '+';
			}
			else if (c == 2) {
				c1 = 'X';
			}
			else if (c == 3) {
				c1 = 'O';
			}
			else {
				c1 = '*';
			}

			cout << a1 << ' ' << b1 << ' ' << c1 << endl;
			if ((a1 == b1) && (b1 == c1)) {
				cout << "Osvojili ste "<< chip2 <<" chip-ova!" << endl;
				*broj_chipova += chip2;
				chip1+= chip2;
				
				cout << "Broj chip-ova: " << *broj_chipova << endl;
			}
			else {
				cout << "Vise srece drugi put." << endl;
				*broj_chipova -= chip2;
				chip1-= chip2;
				
				cout << "Broj chip-ova: " << *broj_chipova << endl;
			}
			
		}
		else {
			cout << "Nemate dovoljno chip-ova, kupite ih." << endl;
		}
		cout << "Nastaviti igru?" << endl;
		cin >> dailine;
	}
	if (chip1 > highscore[0]) {
		highscore[0] = chip1;
	}
	highscore[3] += chip1;
	upisi(highscore, 0, "jednoruki", ime);
	return 0;
}

int kockice(int* broj_chipova, int highscore[], string ime) {
	int korisnik1, korisnik2;
	int racunalo1 , racunalo2;
	int chip1 = 0;
	int chip2 = 0;
	string dailine;
	dailine = "da";
	
	while (((dailine == "da") || (dailine == "DA") || (dailine == "Da"))) {
		cout << "Koliko chip-ova zelite uloziti?" << endl;
		cin >> chip2;
		if (*broj_chipova >= chip2) {
			cout << "Bacite kockicu!" << endl;
			cin.ignore();
			cin.ignore();
			korisnik1 = rand() % 6 + 1;
			racunalo1 = rand() % 6 + 1;
			cout << "Vase bacanje: " << korisnik1 << endl;
			cout << "Protivnikovo bacanje: " << racunalo1 << endl;
			cout << "Ponovno bacite kockicu!" << endl;
			cin.ignore();
			korisnik2 = rand() % 6 + 1;
			racunalo2 = rand() % 6 + 1;
			cout << "Vase bacanje: " << korisnik2 << endl;
			cout << "Protivnikovo bacanje: " << racunalo2 << endl;
			if (korisnik1 > korisnik2) {
				if ((korisnik1 > racunalo1) && (korisnik1 > racunalo2)) {
					cout << "Osvojili ste " << chip2 << " chip-ova!" << endl;
					*broj_chipova += chip2;
					chip1+= chip2;
					
					cout << "Broj chip-ova: " << *broj_chipova << endl;
				}
				else if ((korisnik1 == racunalo1) && (racunalo1 >= racunalo2)) {
					cout << "Izjednaceno!" << endl;
				}
				else if ((korisnik1 == racunalo2) && (racunalo2 >= racunalo1)) {
					cout << "Izjednaceno!" << endl;
				}
				else {
					cout << "Vise srece drugi put!" << endl;
					*broj_chipova -= chip2;
					chip1 -= chip2;
					cout << "Broj chip-ova: " << *broj_chipova << endl;
				}

			}
			if (korisnik2 >= korisnik1) {
				if ((korisnik2 > racunalo1) && (korisnik2 > racunalo2)) {
					cout << "Osvojili ste " << chip2 << " chip-ova!" << endl;
					*broj_chipova += chip2;
					chip1+= chip2;
					
					cout << "Broj chip-ova: " << *broj_chipova << endl;
				}
				else if ((korisnik2 == racunalo1) && (racunalo1 >= racunalo2)) {
					cout << "Izjednaceno!" << endl;
				}
				else if ((korisnik2 == racunalo2) && (racunalo2 >= racunalo1)) {
					cout << "Izjednaceno!" << endl;
				}
				else {
					cout << "Vise srece drugi put!" << endl;
					*broj_chipova -= chip2;
					chip1 -= chip2;
					
					cout << "Broj chip-ova: " << *broj_chipova << endl;
				}

			}
			
		}
		else {
			cout << "Nemate dovoljno chip-ova, kupite ih." << endl;
		}
		cout << "Nastaviti igru?" << endl;
		cin >> dailine;

	}
	highscore[1] = chip2;
	if (chip1 > highscore[1]) {
		highscore[1] = chip2;
	}
	highscore[3] += chip2;
	upisi(highscore, 1, "kockice", ime);
	return 0;
}

int duplo_ili_nista(int* broj_chipova, int highscore[], string ime) {
	int chip1 = 0;
	int chip2 = 0;
	int counter = 0;
	int s = 0;
	int s2 = 0;
	string dailine;
	string duplo;
	dailine = "da";
	int korisnik_karta1;
	int korisnik_karta2;
	int racunalo_karta1;
	int racunalo_karta2;

	string karte[4][13] = { {"2 Herc","3 Herc","4 Herc","5 Herc","6 Herc","7 Herc","8 Herc","9 Herc","10 Herc","Decko Herc","Dama Herc","Kralj Herc","As Herc"},{"2 Karo","3 Karo","4 Karo","5 Karo","6 Karo","7 Karo","8 Karo","9 Karo","10 Karo","Decko Karo","Dama Karo","Kralj Karo","As Karo"},{"2 Pik","3 Pik","4 Pik","5 Pik","6 Pik","7 Pik","8 Pik","9 Pik","10 Pik","Decko Pik","Dama Pik","Kralj Pik","As Pik"},{"2 Tref","3 Tref","4 Tref","5 Tref","6 Tref","7 Tref","8 Tref","9 Tref","10 Tref","Decko Tref","Dama Tref","Kralj Tref","As Tref"} };
	string iskoristene_karte[4][13] = { {"2","3","4","5","6","7","8","9","10","Decko","Dama","Kralj","As"},{"2","3","4","5","6","7","8","9","10","Decko","Dama","Kralj","As"},{"2","3","4","5","6","7","8","9","10","Decko","Dama","Kralj","As"},{"2","3","4","5","6","7","8","9","10","Decko","Dama","Kralj","As"} };
	while (((dailine == "da") || (dailine == "DA") || (dailine == "Da"))&&(counter <52)) {
		cout << "Koliko chip-ova zelite uloziti?" << endl;
		s = 0;
		s2 = 0;
		cin >> chip2;
		if (*broj_chipova >= chip2) {
			cout << "Izvucite kartu." << endl;
			cin.ignore();
			cin.ignore();
			korisnik_karta1 = rand() % 4;
			korisnik_karta2 = rand() % 13;
			racunalo_karta1= rand() % 4;
			racunalo_karta2= rand() % 13;
			if ((iskoristene_karte[korisnik_karta1][korisnik_karta2] != " ") && (iskoristene_karte[racunalo_karta1][racunalo_karta2] != " ") && ((korisnik_karta1 != racunalo_karta1) || (korisnik_karta2 != racunalo_karta2))) {
				iskoristene_karte[korisnik_karta1][korisnik_karta2] = " ";
				iskoristene_karte[racunalo_karta1][racunalo_karta2] = " ";
				counter + 2;
				s2 = 1;
				cout << "Vasa karta je: " << karte[korisnik_karta1][korisnik_karta2] << endl;
				cout << "Protivnikova karta je: " << karte[racunalo_karta1][racunalo_karta2] << endl;
				if (korisnik_karta2 > racunalo_karta2) {
					cout << "Osvojili ste " << chip2 << " chip-ova!" << endl;
					*broj_chipova += chip2;
					chip1 += chip2;
					cout << "Broj chip-ova: " << *broj_chipova << endl;

				}
				else if (korisnik_karta2 < racunalo_karta2) {
					cout << "Vise srece drugi put!" << endl;
					*broj_chipova -= chip2;
					chip1 -= chip2;
					cout << "Broj chip-ova: " << *broj_chipova << endl;
				}
				else {
					cout << "Izjednaceno!" << endl;
				}
				if (counter < 52) {
					while (s == 0) {
						cout << "Duplo ili nista?" << endl;
						cin >> duplo;
						if (((duplo == "duplo") || (duplo == "Duplo") || (duplo == "DUPLO") || (duplo == "DA") || (duplo == "da") || (duplo == "Da")) && (*broj_chipova > 2 * chip2)) {
							korisnik_karta1 = rand() % 4;
							korisnik_karta2 = rand() % 13;
							racunalo_karta1 = rand() % 4;
							racunalo_karta2 = rand() % 13;
							if ((iskoristene_karte[korisnik_karta1][korisnik_karta2] != " ") && (iskoristene_karte[racunalo_karta1][racunalo_karta2] != " ") && ((korisnik_karta1 != racunalo_karta1) || (korisnik_karta2 != racunalo_karta2))) {
								iskoristene_karte[korisnik_karta1][korisnik_karta2] = " ";
								iskoristene_karte[racunalo_karta1][racunalo_karta2] = " ";
								counter + 2;
								cout << "Vasa karta je: " << karte[korisnik_karta1][korisnik_karta2] << endl;
								cout << "Protivnikova karta je: " << karte[racunalo_karta1][racunalo_karta2] << endl;
								if (korisnik_karta2 > racunalo_karta2) {
									cout << "Osvojili ste " << 2 * chip2 << " chip-ova!" << endl;
									*broj_chipova += 2 * chip2;
									chip1 += 2 * chip2;
									cout << "Broj chip-ova: " << *broj_chipova << endl;
								}
								else if (korisnik_karta2 < racunalo_karta2) {
									cout << "Vise srece drugi put!" << endl;
									*broj_chipova -= 2 * chip2;
									chip1 -= 2 * chip2;
									cout << "Broj chip-ova: " << *broj_chipova << endl;
								}
								else {
									cout << "Izjednaceno!" << endl;
								}
								s = 1;
							}

						}
					}

				}
			}
			
		}
		else {
			cout << "Nemate dovoljno chip-ova, kupite ih." << endl;
		}
		if (s2 = 1) {
			cout << "Nastaviti igru?" << endl;
			cin >> dailine;
		}
		

	}
	if (chip1 > highscore[2]) {
		highscore[2] = chip2;
	}
	highscore[3] += chip2;
	upisi(highscore, 2, "duplo", ime);
	return 0;
	
}

int izbornik(int* novac, int* broj_chipova) {
	string ime;
	cout << "Molimo unesite Vase ime: " << endl;
	getline(cin, ime);
	cout << "Molimo unesite iznos novca kojim raspolazete: " << endl;
	cin >> *novac;
	int prekid = 0;
	int izbor;
	int zamjena_novca;
	int highscore[4]{ 0,0,0,0 };
	string dailine;
	srand(time(NULL));

	while (!prekid) {
		cout << "CASINO: Izaberite jednu opciju. " << endl;
		cout << "1. Zamjena novca za chip-ove\t" << "2. Isplata novca\t" << "3. Odabir igre\t" << "4. High score\t" << "5. Izlaz iz programa\t"<< endl;
		cin >> izbor;

		if (izbor == 1) {
			cout << "Koliko novca zelite zamjeniti za chipove?" << endl;
			cin >> zamjena_novca;
			*broj_chipova = zamjena_novca / 5;
			*novac -= *broj_chipova * 5;
			cout << "Iznos preostalog novca je: " << *novac << endl;
			cout << "Iznos Vasih chip-ova je:  " << *broj_chipova << endl;
		}
		if (izbor == 2) {
			cout << "Zelite li unovciti Vase chip-ove?" << endl;
			cin >> dailine;
			if ((dailine == "da") || (dailine == "DA") || (dailine == "Da")) {
				*novac += *broj_chipova * 5;
				*broj_chipova = 0;
				cout << "Iznos Vaseg novca je: " << *novac << endl;
			}
		}
		if (izbor == 3) {
			char izbor_igre;
			cout << "Odaberite igru: " << endl;
			cout << "A. Jednoruki Jack\t" << "B. Bacanje kockica\t" << "C. Duplo ili nista" << endl;
			cin >> izbor_igre;
			if ((izbor_igre == 'a') || (izbor_igre == 'A')) {

				jednoruki_jack(broj_chipova, highscore, ime);
			}
			if ((izbor_igre == 'b') || (izbor_igre == 'B')) {
				kockice(broj_chipova, highscore, ime);
			}
			if ((izbor_igre == 'c') || (izbor_igre == 'C')) {
				duplo_ili_nista(broj_chipova, highscore, ime);
			}

		}

		if (izbor == 4) {
			ispisi("jednoruki");
			ispisi("kockice");
			ispisi("duplo");
			ispisi("ukupni_rezultat");
			
		}
		
		if (izbor == 5) {
			prekid = 1;
		}
	}
	
	return 0;
}

int main()
{
	int novac=0;
	int broj_chipova = 0;
	
	izbornik(&novac, &broj_chipova);
	

}

