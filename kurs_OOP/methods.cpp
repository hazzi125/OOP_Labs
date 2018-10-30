#include <iostream>
#include <cstring>
#include <graphics.h>
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

/*void TQueue::Show(bool flag) {
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
}*/

void TQueue::Show() {
	if(head) {
		initwindow(800, 600);
    	setcolor(RED);
	    int x = 50, y = 50;
	    Node *p;
	    for(p = head; p->next; p = p->next) {
		    rectangle(x, y, x + 100, y + 50);
		
		    moveto(x + 100, y + 10);
		    lineto(x + 150, y + 10);
		    moveto(x + 150, y + 10);
		    lineto(x + 130, y);
		    moveto(x + 150, y + 10);
		    lineto(x + 130, y + 20);
		    
		    moveto(x + 100, y + 40);
		    lineto(x + 150, y + 40);
		    moveto(x + 100, y + 40);
		    lineto(x + 120, y + 30);
		    moveto(x + 100, y + 40);
		    lineto(x + 120, y + 50);
		    
		    x += 150;
	    }
	    rectangle(x, y, x + 100, y + 50);
	
		setcolor(GREEN);
		outtextxy(80, 23, "HEAD");
	    outtextxy(x + 30, y + 60, "TAIL");
	    
	    
		cout << "From beginning: ";
	    for(p = head; p; p = p->next) {
		    cout << p->data << " ";
		}
        cout << "\nFrom end:       ";
		for(p = tail; p; p = p->prew) {
		    cout << p->data << " ";
		}
	    cout << endl;
	    
	    delay(1000);
	    system("pause");
        closegraph();
	}
	else {
		cout << "Doesn't exist\n";
		system("pause");
	}
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
