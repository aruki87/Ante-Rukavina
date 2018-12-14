// selection insert sortovi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void selectionSort(int lista[], int velicina) {
	int min;
	int min_index;
	int temp;
	for (int i = 0; i < velicina - 1; i++) {
		min = lista[i];
		min_index = i;
		for (int j = i + 1; j < velicina ; j++) {
			if (lista[j] < min) {
				min = lista[j];
				min_index = j;
			}
		}
		if (min_index != i) {
			temp = lista[i];
			lista[i] = min;
			lista[min_index] = temp;
		}
		
	}
}

void insertionSort(int lista[], int velicina) {

	int i, x, j;
	for (i = 1; i < velicina; i++){
		x = lista[i];
		j = i - 1;
		while (j >= 0 && lista[j] > x)
		{
			lista[j + 1] = lista[j];
			j--;
		}
		lista[j + 1] = x;
	}
}

int main()
{
	int n=10;
	int lista[10] = { 6, 4, 8, 9, 5,1, 10 ,2,4,3};
	//selectionSort(lista, n);
	
	insertionSort(lista, 10);
	for (int i = 0; i < n; i++) {
		cout << lista[i] << " ";
	}
	
	
}

