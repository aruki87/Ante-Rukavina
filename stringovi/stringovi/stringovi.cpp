
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//int a = 1;
	//int b = 2; 
	//int c = 3;
	//cin >> a >> b >> c;
	/*string ip ="";
	getline(cin, ip);
	cout << ip <<endl;*/
	string a = "welcome";
	string b = "w3resource";
	cout << "duljina stringa a je " << a.size() << endl;
	cout << "duljina stringa b je " << b.size() << endl;
	cout << "znak na poziciji 3 za a je " << a[3] << endl;
	cout << "znak na poziciji 3 za b je " << b[3] << endl;
	
	if (a.empty()) {
		cout << "string a je prazan" << endl;
	}
	else {
		cout << "string a nije prazan" << endl;
	}
	if (b.empty()){
		cout << "string b je prazan"  << endl;
	}
	else {
		cout << "string b nije prazan" << endl;
	}

	
	cout << a.substr(3) << endl;
	cout << b.substr(3)<< endl;
	a.replace(3, a.length(), "went");
	cout << a << endl;
	a.append(b);
	cout << a << endl;
	b.append("eijeije");
	cout << b << endl;
	a.insert(3, "ubacivanje");
	cout << a << endl;
	b.insert(3, "ubacivanje");
	cout << b << endl;
	cout << "Unesite recenicu" << endl;
	getline(cin, a);
	cout << a << endl;

	

}

