#include <iostream>
#include <cstring>
#include "head.h"
using namespace std;

TQueue::TQueue() {
	head = tail = NULL;
}

TStack::TStack() {
	head = tail = NULL;
}

void TQueue::Add(int d) {
	Node *p = new Node;
	p->prew = p->next = NULL;
	p->data = d;
	
	if(head) {
		p->prew = tail;
		tail->next = p;
		tail = p;
	}
	else {
		p->prew = NULL;
		head = tail = p;
	}
}

void TQueue::Show(bool flag) {
	Node *p;
	if(flag) {
		for(p = head; p; p = p->next) {
		    cout << p->data << " ";
		}
	}
	else {
		for(p = tail; p; p = p->prew) {
		    cout << p->data << " ";
		}
	}
	cout << "\n";
}

void TQueue::Del(bool flag) {
	Node *p;
	if(head == tail) {
		p = head;
		head = tail = NULL;
	}
	else {
		if(flag) {
			p = head;
			head = head->next;
			head->prew = NULL;	
		}
		else {
			p = tail;
			tail = tail->prew;
			tail->next = NULL;
		}
	}
	delete p;
}

void TStack::Add(int d) {
	Node *p = new Node;
	p->data = d;
	p->prew = p->next = NULL;
	if(head) {
		head->prew = p;
		p->next = head;
		head = p;
	}
	else {
		p->prew = NULL;
		head = tail = p;
	}
}

void TStack::Show(bool flag) {
	Node *p;
	if(flag) {
		for(p = head; p; p = p->next) {
		    cout << p->data << " ";
		}
	}
	else {
		for(p = tail; p; p = p->prew) {
		    cout << p->data << " ";
		}
	}
	cout << "\n";
}

void TStack::Del(bool flag) {
	Node *p;
	if(head == tail) {
		p = head;
		head = tail = NULL;
	}
	else {
		if(flag) {
			p = head;
			head = head->next;
			head->prew = NULL;
			delete p;	
		}
		else {
			p = tail;
			tail = tail->prew;
			tail->next = NULL;
			delete p;
		}
	}
}
