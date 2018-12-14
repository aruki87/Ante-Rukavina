
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int prosti(int n)
{
	bool flag = true;
	if (n == 2 || n == 1) {
		return flag;
	}
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n%i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int goldbach(int broj) {
	string ispisZbroja;
	int i = 1;
	
	for (int i = 1; i < broj; i++) {
		
		if (prosti(broj - i) && prosti(i)) {
			ispisZbroja= to_string(broj - i) + " + " + to_string(i) + " = " + to_string(((broj - i) + i));
			cout << ispisZbroja << endl;
			return 1;
			
			
		}

	}
	return 0;
}

int main()
{	
	string a;
	 int broj = 198;
	 int i = 1;
	 
	 while (i) {
		 i = goldbach(broj);
		 broj=broj+2;
	}
	 cout << "Goldbach je u krivu";
}

