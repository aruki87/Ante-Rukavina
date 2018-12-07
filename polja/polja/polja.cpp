// polja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int ocjene[10];
	float p = 0;
	for (int i = 0; i < 10; i++) {
		cin >> ocjene[i];
		p += ocjene[i];
	}
	p = p / 10;
	cout << p;*/
	/*0 1 2
	  3 4 5
	  6 7 8*/


	char krk[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	int y = 9;
	int i;
	int z = 0;
	int s = 0;
	int w1 = 0;
	int w2 = 0;
	int w3 = 0;
	int w4 = 0;
	int w5 = 0;
	int w6 = 0;
	while (y == 9) {
		cin >> i;
		cin >> krk[i-1];

		if (((krk[3] == krk[4]) && (krk[3] == krk[5]) && (krk[5] == ' '))) {
			krk[4] = 'o';
			
		}
		
		else if (((krk[0] == krk[4]) && (krk[0] == krk[8]) && (krk[0] == ' ')) ) {
			krk[4] = 'o';
			
		}
		else if ((krk[0] == krk[1]) && (krk[0] == krk[2]) && (krk[2] == ' ') ) {
			krk[1] = 'o';
			
		}
		else if (((krk[0] == krk[3]) && (krk[0] == krk[6]) && (krk[6] == ' ')) ) {
			krk[0] = 'o';
			
		}

		else if (((krk[1] == krk[4]) && (krk[1] == krk[7]) && (krk[7] == ' ')) ) {
			krk[4] = 'o';
			
		}
		else if (((krk[2] == krk[5]) && (krk[2] == krk[8]) && (krk[8] == ' ')) ) {
			krk[2] = 'o';
			
		}
		else if ((krk[2] == krk[4]) && (krk[2] == krk[6]) && (krk[6] == ' ') ) {
			krk[4] = 'o';
			
		}
		else if (((krk[6] == krk[7]) && (krk[6] == krk[8]) && (krk[8] == ' ')) ) {
			krk[6] = 'o';
			
		}

		if ((krk[3] != 'x') && (krk[5] != 'x') && (krk[4] == 'o') && (z > 0)) {
			if (krk[0] != 'x') {
				w1++;
			}
			if (krk[6] != 'x') {
				w1++;
			}
			if (krk[2] != 'x') {
				w2++;
			}
			if (krk[8] != 'x') {
				w2++;
			}
			if (w1 > w2) {
				krk[3] = 'o';
			}
			else if (w2 > w1) {
				krk[6] = 'o';
			}
			else {
				krk[3] = 'o';
			}
		}
		else if(z>0){
			if ((krk[0] != 'x') && (krk[8] != 'x')) {
				if ((krk[1] != 'x') && (krk[2] != 'x')) {
					w1++;
				}
				if ((krk[6] != 'x') && (krk[7] != 'x')) {
					w2++;
				}
			}
			if ((krk[2] != 'x') && (krk[6] != 'x')) {
				if ((krk[0] != 'x') && (krk[1] != 'x')) {
					w3++;
				}
				if ((krk[7] != 'x') && (krk[8] != 'x')) {
					w4++;
				}

			}
			if ((krk[1] != 'x') && (krk[7] != 'x')) {
				if ((krk[0] != 'x') && (krk[2] != 'x')) {
					w5++;
				}
				if ((krk[6] != 'x') && (krk[8] != 'x')) {
					w6++;
				}
			}

			if (w1 > w2) {
				krk[0] = 'o';
			}
			else if (w2 > w3) {
				krk[8] = 'o';
			}
			else if (w3 > w4) {
				krk[2] = 'o';
			}
			else if (w4 > w5) {
				krk[6] = 'o';
			}
			else if (w5 > w6) {
				krk[1] = 'o';
			}
			else if (w6 > w5) {
				krk[7] = 'o';
			}
			
		}

		

		
		if (((krk[0] == krk[4]) && (krk[0] == krk[8]) && (krk[0] != ' ')) || ((krk[1] == krk[4]) && (krk[1] == krk[7]) && (krk[7] != ' ')) || ((krk[2] == krk[4]) && (krk[2] == krk[6]) && (krk[6] != ' '))) {
			cout << krk[i-1] << " je pobjedio" << endl;
			i = 10;
		}
		else if (((krk[0] == krk[3]) && (krk[0] == krk[6]) && (krk[6] != ' ')) || ((krk[2] == krk[5]) && (krk[2] == krk[8]) && (krk[8] != ' ')) || ((krk[0] == krk[1]) && (krk[0] == krk[2]) && (krk[2] != ' '))) {
			cout << krk[i-1] << " je pobjedio" << endl;
			i = 10;
		}
		else if (((krk[3] == krk[4]) && (krk[3] == krk[5])&&(krk[5]!=' ')) || ((krk[6] == krk[7]) && (krk[6] == krk[8]) && (krk[8] != ' '))) {
			cout << krk[i-1] << " je pobjedio" << endl;
			i = 10;
		}


		



		for (int j = 0; j < 9; j++) {
			if ((j == 3) || (j == 6)) {
				cout << endl;
				
			}
			cout << "|" << krk[j] << "|";

		}
		cout << endl;
		i=i+2;
		z++;
		
		
	}

}

