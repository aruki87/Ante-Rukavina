#include "pch.h"
#include <iostream>
using namespace std;

void zamjena(int left, int right) {
	int temp;
	temp = left;
	left = right;
	right = temp;

}

void zamjena2(int *left, int *right) {
	int temp;
	temp = *left;
	*left =*right;
	*right = temp;
}

int *povecanje_polja(int *polje, int *x) {
	int *polje2 = new int[*x + *x / 2];

	for (int i = 0; i < *x; i++) {
		polje2[i] = polje[i];
	}
	for (int i = *x; i < *x + *x / 2; i++) {
		cin >> polje2[i];
	}

	
	delete polje;
	*x= *x + *x / 2;
	return polje2;
}

void dvodimenzionalnoPolje() {
	int x, y;
	cout << "Unesite velicinu polja: ";
	cin >> x >> y;
	int **pppolje = new int* [x];
	for (int i = 0; i < x; i++) {
		pppolje[i] = new int[y];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << "Unesite vrijednost polja[" << i << "], [" << j << "]: ";
			cin >> pppolje[i][j];
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << pppolje[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < x; i++) {
		delete pppolje[i];
	}
	delete pppolje;
	pppolje = nullptr;
}

void trodimenzionalnoPolje() {
	int x, y,z;
	cout << "Unesite velicinu polja: ";
	cin >> x >> y >> z;
	int ***ppppolje = new int**[x];
	for (int i = 0; i < x; i++) {
		ppppolje[i] = new int*[y];
		for (int j = 0; j < y; j++) {

			ppppolje[i][j] = new int[z];
		}
	}
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {
				//cout << "Unesite vrijednost polja[" << i << "], [" << j << "], [" << k << "]: ";
				ppppolje[i][j][k] = i + j + k;
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {
				cout << ppppolje[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			delete ppppolje[i][j];
		}
	}
	for (int i = 0; i < x; i++) {
		delete ppppolje[i];
	}

	
	
	delete ppppolje;
	ppppolje = nullptr;
}


int main()
{

	int a = 1;
	int b = 2;
	int c = 9;
	/*zamjena2(&a, &b);
	cout << a << " " << b;*/
	/*
	int x;
	cin >> x;
	*/
	/*
	int *polje = new int[x];
	for (int i = 0; i < x; i++) {
		cin >> polje[i];

	}
	for (int i = 0; i < x; i++) {
		cout << "polje[" << i << "]: " << polje[i] << endl;
	}

	polje = povecanje_polja(polje, &x);
	
	for (int i = 0; i < x; i++) {
		cout << "polje[" << i << "]: " << polje[i] << endl;
	}
	*/
	trodimenzionalnoPolje();

}