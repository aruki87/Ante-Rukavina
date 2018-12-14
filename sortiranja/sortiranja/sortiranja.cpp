
#include "pch.h"
#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>    

using namespace std;

void BubbleSort(int lista[], int velicina ) {
	int temp, j;
	bool bilaZamjena = true;

	for (int i = 0; bilaZamjena == true; i++) {
		bilaZamjena = false;
		for (j = 0; j < velicina - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilaZamjena = true;
			}
		}
	}
}

int random1(int a , int list[]) {
	srand(time(NULL));
	a = rand() % 10 + 1;
	if (a != list[a - 1]) {
		random1(a, list);
		
	}
	else {
		
		return a;
	}
}

void popuniListu(int list[]) {
	
	int a=2;
	int iskoristeno[10];
	a = random1(a, iskoristeno);
	list[a] = a;

}


int main()
{
	int list1[10] = { 1,1,1,1,1,1,1,1,1,1 };
	popuniListu(list1);
	//BubbleSort(list1, 10);
	for (int i = 0; i < 7; i++) {
		cout << list1[i] << " ";
	}
}

