// multi polja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//tablica mnozenja
	/*int tablica[10][10];
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			tablica[i-1][j-1] = i * j;
			cout << "\t" << tablica[i-1][j-1];
			
			if (j==10) {
				cout << endl;
			}
		}
	}

	//tablica mnozenja *3
	cout << endl << endl << endl;
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			tablica[i - 1][j - 1] *=3;
			cout <<"\t" ;
			
			if (j == 10) {
				cout << endl;
			}
		}
	}*/

	//unos 3d polja
	/*int s, d, v = 1;
	int tri_dimenzije [2][2][2];
	
		for ( int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				for (int k = 0; k < 2; k++) {

					cin >> tri_dimenzije[i][j][k];
				}
			}

		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				for (int k = 0; k < 2; k++) {

					cout << "element["<<i<<"]["<<j<<"]["<<k<<"]= " << tri_dimenzije[i][j][k] << endl;
				}
			}

		}*/
	// ispuna i izlistanje 2d polja sa 'o'
	/*char dd[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			dd[i][j] = 'o';
			cout << dd[i][j];
			if (j == 8) {
				cout << endl;
			}
			
		}
	}*/

	// ispuna i izlistanje 2d polja sa 'o' i dijagonala s 'x'
	/*char dd[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			dd[i][j] = 'o';
			dd[i][8 - i] = 'x';
			if (i == j) {
				dd[i][j] = 'x';
			}
			cout << dd[i][j];
			if (j == 8) {
				cout << endl;
			}

		}
	}*/

	// unos vrijednosti u multidimenzionalni vektor

	//unos u 2d vektor
	/*vector <vector<int>> v;
	int x;
	for (int i = 0; i < 3; i++) {
		vector <int> temp;
		for (int j = 0; j < 3; j++) {
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}*/

	//unos u 3d vektor
	vector <vector<vector<int>>> v;
	int x;
	for (int i = 0; i < 3; i++) {
		vector <vector<int>> temp;
		for (int j = 0; j < 3; j++) {
			vector <int> temp2;
			for (int k = 0; k < 3; k++) {
				cin >> x;
				temp2.push_back(x);
			}

			temp.push_back(temp2);
		}
		v.push_back(temp);
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cout << "element[" << i << "][" << j << "][" << k << "]= " << v[i][j][k] << endl;
				if (k == 2) {
					cout << endl;
				}
			}
		}
	}
}
	



