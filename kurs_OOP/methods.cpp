#include <iostream>
#include <cstring>
#include <graphics.h>
#include "head.h"
using namespace std;

template <typename Type> void TList<Type>::Print(int &x, int &y, bool &flag) {
	rectangle(x, y, x + 100, y + 50);
	if(flag) {		
		if(x < 650) {
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
		
		else {
			moveto(x + 30, y + 50);
		    lineto(x + 30, y + 100);
		    moveto(x + 30, y + 100);
		    lineto(x + 20, y + 80);
		    moveto(x + 30, y + 100);
		    lineto(x + 40, y + 80);
		    
		    moveto(x + 70, y + 50);
		    lineto(x + 70, y + 100);
		    moveto(x + 70, y + 100);
		    lineto(x + 60, y + 80);
		    moveto(x + 70, y + 100);
		    lineto(x + 80, y + 80);
		    
		    y += 100;
		    flag = 0;
		}
	}
	
	else {
		if(x > 150) {
			moveto(x, y + 10);
		    lineto(x - 50, y + 10);
		    moveto(x - 50, y + 10);
		    lineto(x - 30, y);
		    moveto(x - 50, y + 10);
		    lineto(x - 30, y + 20);
			    
		    moveto(x, y + 40);
		    lineto(x - 50, y + 40);
		    moveto(x, y + 40);
		    lineto(x - 20, y + 30);
		    moveto(x, y + 40);
		    lineto(x - 20, y + 50);
		    
		    x -= 150;
		}
		
		else {
			moveto(x + 30, y + 50);
		    lineto(x + 30, y + 100);
		    moveto(x + 30, y + 100);
		    lineto(x + 20, y + 80);
		    moveto(x + 30, y + 100);
		    lineto(x + 40, y + 80);
		    
		    moveto(x + 70, y + 50);
		    lineto(x + 70, y + 100);
		    moveto(x + 70, y + 100);
		    lineto(x + 60, y + 80);
		    moveto(x + 70, y + 100);
		    lineto(x + 80, y + 80);
			
			y += 100;
		    flag = 1;
		}
	}
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

template <typename Type> void TQueue<Type>::Show() {
	if(head) {
		bool flag = 1;
		setcolor(GREEN);
		outtextxy(80, 23, "HEAD");
    	setcolor(RED);
	    int x = 50, y = 50;
	    Node<Type> *p;
	    for(p = head; p->next; p = p->next) {
		    this->Print(x, y, flag);
		    delay(300);
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

template <typename Type> void TStack<Type>::Show() {
	if(head) {
		bool flag = 1;
		setcolor(GREEN);
		outtextxy(80, 23, "HEAD");
    	setcolor(YELLOW);
	    int x = 50, y = 50;
	    Node<Type> *p;
	    for(p = head; p->next; p = p->next) {
		    this->Print(x, y, flag);
		    delay(300);
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
		}
		else {
			p = tail;
			tail = tail->prew;
			tail->next = NULL;
		}
	}
	delete p;
}

template <typename Type> void TCycle<Type>::Add(Type d) {
	Node<Type> *p = new Node<Type>;
	p->data = d;
	if(head) {
		Node<Type> *temp;
		p->data = d;
		temp = head->next;
		head->next = p;
		p->next = temp;
		p->prew = head;
		temp->prew = p;
	}
	else {
		head = p;
		head->next = head->prew = head;
	}
}

template <typename Type> void TCycle<Type>::Show() {
	if(head) {
		Node<Type> *p;
		p = head;
		do {
			cout << p->data << " ";
			p = p->next;
		} while(p != head);
		cout << "\n";
	}
	else {
		cout << "Doesn't exist\n";
	}
	system("pause");
}

template <typename Type> void TCycle<Type>::Del(bool flag) {
	Node<Type> *temp;
	
	if((head) && (head != head->next)) {
		Node<Type> *pr, *ne;
		if(flag) {
			temp = head;
			ne = head->next;
			pr = head->prew;
			pr->next = head->next;
			ne->prew = head->prew;
			head = head->prew;
		}
		else {
			temp = head->prew;
			ne = temp->next;
			pr = temp->prew;
			pr->next = temp->next;
			ne->prew = temp->prew;
		}
	}
	else {
		temp = head;
		head = NULL;
	}
	delete temp;
}









