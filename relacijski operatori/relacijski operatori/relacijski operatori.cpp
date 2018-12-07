

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << (5 < 3 || (7 / 2) > (!(6 == 6))) && !!true || false ;
	cout << endl;
	cout << !(((!true && false) && !(true || false)) && (!(false && true) || !(false || true))) ;
}

