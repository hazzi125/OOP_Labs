#include <iostream>
#include <cstring>
#include "head.h"
using namespace std;

TQueue::TQueue() {
	head = tail = NULL;
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

void TQueue::Add(int d) {
	Node *p = new Node;
	p->next = NULL;
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
