// liste.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>  
#include <string>


using namespace std;

struct Node {
	int value;
	Node *next;
};

void insertElementFront(Node *&head, int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void insertElementEnd(Node *&head, int value) {
	Node *n = new Node;
	n->value = value;
	n->next = nullptr;

	Node *temp = head;
	if (temp == nullptr) {
		temp = n;
		head = temp;
	}
	else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

int brojElemenata (Node *&head) {
	int broj = 1;
	Node *temp = head;
	if (temp == nullptr) {
		return 0;
	}
	else {
		while (temp->next != NULL) {
			temp = temp->next;
			broj++;
		}
		return broj;
	}
}

int pretragaListe(Node *&head, int pozicija) {
	int counter = 1;
	Node *temp = head;
	if (temp == nullptr) {
		cout << "Lista je prazna!" << endl;
		return 0;
	}
	while (counter != pozicija) {
		if (temp->next == nullptr) {
			cout << "Nema toliko elemenata!" << endl;
			return 0;
		}
		temp = temp->next;
		counter++;
	}
	return temp->value;
}

int nadjiElement(Node *&head, int vrijednost) {
	int counter = 1;
	Node *temp = head;
	if (temp == nullptr) {
		cout << "Lista je prazna!" << endl;
	}
	while (temp != nullptr) {
		if (vrijednost == temp->value) {
			return counter;
		}
		temp = temp->next;
		counter++;
		
	}
	cout << "vrijednost nije u listi!" << endl;
	return 0;

}
string nadjiElement2(Node *&head, int vrijednost) {
	string elementi = "Vrijednost se nalazi na indeksu: ";
	int counter = 1;
	Node *temp = head;
	if (temp == nullptr) {
		return "Lista je prazna!";
	}
	while (temp != nullptr) {
		if (vrijednost == temp->value) {
			elementi += " " + to_string(counter);
		}
		temp = temp->next;
		counter++;

	}
	if (elementi == "Vrijednost se nalazi na indeksu: ") {
		return "Vrijednost nije u listi!";
	}
	return elementi;	

}

void brisanjeElementa(Node *&head, int indeks) {
	int counter = 1;
	int sw=1;
	Node *temp = head;
	Node *prev= head;
	if (temp == nullptr) {
		cout << "Lista je prazna!" << endl;
		sw = 0;
	}
	
	while ( (counter != indeks)&& (sw==1)) {
		if (temp->next == nullptr) {
			cout << "Nema toliko elemenata!" << endl;
			sw = 0;
			
		}
		else {
			prev = temp;
			temp = temp->next;
			counter++;
		}
		
	}
	if (counter == 1) {
		head = temp->next;
		delete temp;
		sw = 0;
	}
	if (sw) {
		prev->next = temp->next;
		delete temp;
	}
}

int main(){	

	srand(time(NULL));
	Node *head = nullptr;
	int n = 10;
	for (int i = 0; i < n; i++) {
		insertElementEnd(head, rand() % 10 + 1);

	}
	//cout << brojElemenata(head);
	//cout << pretragaListe(head, 11);
	//cout << nadjiElement(head , 3 );
	//cout << nadjiElement2(head, 2);
	brisanjeElementa(head, 2);
	cout << brojElemenata(head);

}
