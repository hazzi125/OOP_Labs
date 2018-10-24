#include <iostream>
#include <cstring>
using namespace std;

class TStack {
protected:
	int data;
	TStack *next;
	
public:
	TStack(int d, TStack *&head) {
		data = d;
		this->next = head;
		head = this;
	}
	
	void PrintStack(TStack *&head) {
		TStack *p;
		for(p = head; p != NULL; p = p->next) 
			cout << p->data << " ";
		cout << endl;
	}
};

class TQueue {
protected:
	int data;
	TQueue *next;
	
public:
	TQueue(int d, TQueue *&head, TQueue *&tail) {
		data = d;
		this->next = NULL;
		if(head) {
			tail->next = this;	
		}
		
		else {
			head = this;
		}
		tail = this;
	}
	
	void PrintQueue(TQueue *&head) {
		TQueue *p;
		for(p = head; p != NULL; p = p->next) 
			cout << p->data << " ";
		cout << endl;
	}
};




