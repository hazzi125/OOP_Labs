#include "head.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {/*
	int a;
	//char c[100];
	bool flag1;
	TNum *head = NULL, *p;
	
	do {
		cout << "Enter elem: ";
		cin >> a;
		p = new TNum(a, head);
		cout << "Do you want to add more elems? 1/0 ";
		cin >> flag1;
		system("cls");
	} while(flag1);
	
	cout << "This stack:\n";
	p->PrintList(head);*/
	
	int d, flag;
	TStack *head1, *pS;
	TQueue *head2, *tail, *pQ;
	head1 = NULL;
	head2 = tail = NULL;
	
	for( ; ; ) {
	    cout << "1. Stack\n";
	    cout << "2. Queue\n";
	    cout << "3. PrintStack\n";
	    cout << "4. PrintQueue\n";
	    cout << "5. Exit\n\n";
	    
	    cin >> flag;
	    switch(flag) {
	    	case 1: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pS = new TStack(d, head1);
				break;
			}
			
			case 2: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pQ = new TQueue(d, head2, tail);
				break;
			}
			
			case 3: {
				system("cls");
				cout << "Your stack:\n";
				pS->PrintStack(head1);
				system("pause");
				break;
			}
			
			case 4: {
				system("cls");
				cout << "Your queue:\n";
				pQ->PrintQueue(head2);
				system("pause");
				break;
			}
			
			case 5: {
				return 0;
				break;
			}
		}
		system("cls");
	}
}





