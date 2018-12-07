

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	int u = 1;
	int m = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		u *= m;
	}
	cout << u;
}

