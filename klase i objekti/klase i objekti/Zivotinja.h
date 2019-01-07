#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H

#include <iostream>
#include <string>
using namespace std;



class Zivotinja {
public:
	
	int utovi(int dodatna_tezina);
	void trci_brze(float brze);
	string promjeni_vrstu(string nova_vrsta);
	void postavi_vrstu(string vrsta1);
	void postavi_brzinu(int brzina1);
	void ispisi_vrstu();

private:
	int tezina;
	string vrsta;
	float brzina;
	/*int duljina;
	void produlji_se(int produljenje);*/
};

#endif