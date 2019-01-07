// klase povezana lista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


using namespace std;

class Node {
private:
	int value;
	Node *next;
public:
	void set_value( int value1);
	void set_next(Node *pointer);
	int get_value();
	Node* get_next();
};

void Node::set_value( int value1) {
	value = value1;
}

void Node::set_next(Node *pointer) {
	next = pointer;
}

int Node::get_value() {
	return value;
}

Node* Node::get_next() {
	return next;
}


class Lista {
private:
	Node *head;
public:
	Lista();
	void unos_pocetak(int value);
	void unos_kraj(int value);
	void brisanje_pocetka();
	void brisanje_kraj();
	void ispis_liste();
};

Lista::Lista() {
	head = nullptr;
	
}

void Lista::unos_pocetak(int value) {
	Node *temp = new Node;
	temp->set_value(value);
	temp->set_next(head);
	head = temp;
}

void Lista::unos_kraj(int value) {
	Node *n = new Node;
	n->set_value(value);
	n->set_next(nullptr);
	Node *temp = head;
	if (temp == nullptr) {
		temp = n;
		head = temp;
	}
	else {
		temp = head;
		while (temp->get_next() != NULL) {
			temp = temp->get_next();
		}
		temp->set_next(n);
	}
}

void Lista::ispis_liste() {
	Node *temp = head;
	if (temp == nullptr) {
		cout << "Lista je prezna!" << endl;
	}
	else {
		while (temp != nullptr) {
			cout << temp->get_value() << "\t";
			temp = temp->get_next();
		}
		cout << endl;
	}

}

void Lista::brisanje_pocetka() {
	Node *temp = head;

	if (temp != nullptr) {
		head = temp->get_next();
		delete temp;
	}
}

void Lista::brisanje_kraj() {
	Node *temp = head;
	if (head->get_next() == nullptr) {
		head = nullptr;
		delete temp;
	}
	else {
		Node *prev = nullptr;
		while (temp->get_next() != nullptr) {
			prev = temp;
			temp = temp->get_next();
		}
		prev->set_next(nullptr);
		delete temp;
	}
}

int main()
{
	Lista lista1;

	int n = 10;
	for (int i = 0; i < n; i++) {
		lista1.unos_pocetak(i);
	}
	lista1.brisanje_kraj();
	lista1.brisanje_pocetka();
	lista1.ispis_liste();
	
}

