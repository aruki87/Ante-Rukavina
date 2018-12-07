

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int z1, z2, z3, z4, broj;
	cin >> broj;
	z1 = broj / 1000 % 10;
	z2 = broj / 100 % 10;
	z3 = broj / 10 % 10;
	z4 = broj % 10;
	if (z1 < 9) {
		cout << broj + 1000;
	}
	else if(z2< 9) {
		cout << broj + 100;
	}
	else if (z3< 9) {
		cout << broj + 10;
	}
	else if (z4< 9) {
		cout << broj + 1;
	}

}


