// klase i objekti kon des.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

class Kutija {
public:
	int x;
	Kutija();
	~Kutija();
};

Kutija::Kutija() {
	cout << "Stvoren je objekt kutija" << endl;
}

Kutija::~Kutija() {
	cout << "Unisten je objekt kutija" << endl;
}

int main()
{
	Kutija a;
	cout << "aaaaaaaaaaaa" << endl;
}
