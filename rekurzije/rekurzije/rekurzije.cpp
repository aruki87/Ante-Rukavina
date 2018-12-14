
#include "pch.h"
#include <iostream>
using namespace std;

void sagradi_zid(int visina) {
	if (visina > 0) {
		sagradi_zid(visina - 1);
	}
	cout << "HHHHHHHHHHHHHHHHHHHH" << visina<< endl;
}
void ispisi_mv(int broj) {
	if (broj > 0) {
		ispisi_mv(broj - 1);
	}
	cout << broj << " ";
}
void ispisi_vm(int broj) {
	cout << broj << " ";
	if (broj > 0) {
		ispisi_vm(broj - 1);
	}
}
void beskonacna() {
	while (1) {
		cout << "Beskonacna funkcija! ";
	}
}
int faktorijela(int broj) {
	
	if (broj == 1) {
		return 1;
	}
	else {
		return broj * faktorijela(broj - 1);

	}
}

int fibonacci(int broj) {
	if (broj == 0) {
		return 0;
	}
	if (broj > 2) {
		return fibonacci(broj - 1) + fibonacci(broj-2);
	}
	else {
		return 1;
	}
}

void ispisi_fibonaccia(int broj) {
	if (broj > -1) {
		
		ispisi_fibonaccia(broj - 1);
		cout << fibonacci(broj) << " ";
	}
}

int niz(int broj) {
	if (broj > 1) {
		return broj + niz(broj - 1);
	}
	else {
		return 1;
	}
}


int main()
{
	//sagradi_zid(5);
	//ispisi_vm(9);
	//beskonacna();
	int broj = 10;
	//cout << faktorijela(broj);
	//cout << fibonacci(1);
	//ispisi_fibonaccia(8);
	cout << niz(8);
}

