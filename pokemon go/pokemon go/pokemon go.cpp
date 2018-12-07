
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

 int main(){

	int n;
	string p;
	int k, m, c; 
	int index=0;
	int evo;
	int emax= 0;
	int counter = 0;
	vector <string> pi;
	

	cin >> n;
	for (int i = 0; i < n; i++) {
		evo = 0;
		cin >> p;
		pi.push_back(p);
		cin >> k >> m;
		c = m- k;
		while (c > -1) {
			evo++;
			c += 2;
			c -= k;

		}
		counter += evo;
		if (evo > emax) {
			emax = evo;
			index = i;
		}
		
	}
	cout << counter << endl;
	cout << pi[index] << endl;

}