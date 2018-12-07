// bond.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	int a, b, c, d, e, f;
	char i2, j2, k2, l2;
	cin >> a >> b >> c >> d >> e >> f;
	int rez;
	for (int i = 0; i < 4; i++) {
		rez = 0;
		if (i == 0) {
			rez = a + b;
			i2 = '+';
		}
		else if (i == 1) {
			rez = a - b;
			i2 = '-';
		}
		else if (i == 2) {
			rez = a * b;
			i2 = '*';
		}
		else if (i == 3) {
			rez = a / b;
			i2 = '/';
		}
		
		for (int j = 0; j < 4; j++) {
			if (j == 0) {
				rez += c;
				j2 = '+';
			}
			else if (j == 1) {
				rez -= c;
				j2 = '-';
			}
			else if (j == 2) {
				rez *= c;
				j2 = '*';
			}
			else if (j == 3) {
				rez /= c;
				j2 = '/';
			}
			
			for (int k = 0; k < 4; k++) {
				if (k == 0) {
					rez += d;
					k2 = '+';
				}
				else if (k == 1) {
					rez -= d;
					k2 = '-';
				}
				else if (k == 2) {
					rez *= d;
					k2 = '*';
				}
				else if (k == 3) {
					rez /= d;
					k2 = '/';
				}
				cout << k << " " << k2 << endl;
				for (int l = 0; l < 4; l++) {
					if (l == 0) {
						rez += e;
						l2 = '+';
					}
					else if (l == 1) {
						rez -= e;
						l2 = '-';
					}
					else if (l == 2) {
						rez *= e;
						l2 = '*';
					}
					else if (l == 3) {
						rez /= e;
						l2 = '/';
					}
					if (rez == f) {
						cout << a << i2 << b << j2 << c << k2 << d << l2 << e << "=" << rez << endl;
						i = 5;
						j = 5;
						k = 5;
						l = 5;
					}
						
						
					}
					
				}
				
			}
			
		}	
}

