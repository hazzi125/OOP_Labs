#include <iostream>
#include <cstring>
#include <graphics.h>
#include "head.h"
using namespace std;

template <typename Type> TQueue<Type>::TQueue() {
	head = tail = NULL;
}

template <typename Type> TStack<Type>::TStack() {
	head = tail = NULL;
}

template <typename Type> void TQueue<Type>::Add(Type d) {
	Node<Type> *p = new Node<Type>;
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

template <typename Type> void TQueue<Type>::Show() {
	if(head) {
		setcolor(GREEN);
		outtextxy(80, 23, "HEAD");
    	setcolor(RED);
	    int x = 50, y = 50;
	    Node<Type> *p;
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
		    delay(500);
	    }
	    rectangle(x, y, x + 100, y + 50);
	
		setcolor(GREEN);
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
	    
	    //delay(100);
	    system("pause");
        setfillstyle(1, 0);
        bar(0, 0, 800, 600);
	}
	else {
		cout << "Doesn't exist\n";
		system("pause");
	}
}

template <typename Type> void TQueue<Type>::Del(bool flag) {
	Node<Type> *p;
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

template <typename Type> void TStack<Type>::Add(Type d) {
	Node<Type> *p = new Node<Type>;
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

/*void TStack::Show(bool flag) {
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

template <typename Type> void TStack<Type>::Show() {
	if(head) {
		setcolor(GREEN);
		outtextxy(80, 23, "HEAD");
    	setcolor(YELLOW);
	    int x = 50, y = 50;
	    Node<Type> *p;
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
		    delay(500);
	    }
	    rectangle(x, y, x + 100, y + 50);
	
		setcolor(GREEN);
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
	    
	    //delay(100);
	    system("pause");
        setfillstyle(1, 0);
        bar(0, 0, 800, 600);
	}
	else {
		cout << "Doesn't exist\n";
		system("pause");
	}
}

template <typename Type> void TStack<Type>::Del(bool flag) {
	Node<Type> *p;
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
