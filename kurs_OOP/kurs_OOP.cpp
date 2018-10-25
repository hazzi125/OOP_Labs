#include <iostream>
#include <cstring>
#include "head.h"
#include "methods.cpp"
using namespace std;

int main() {	
	int d, flag;
	//TStack *head1, *pS;
	//TQueue *head2, *tail, *pQ;
	//head1 = NULL;
	TQueue pQ;
	
	for( ; ; ) {
	    cout << "1. Stack\n";
	    cout << "2. Queue\n\n";
	    cout << "3. Print queue from the beginning\n";
	    cout << "4. Print queue from the end\n\n";
	    cout << "5. DeleteStack\n";
	    cout << "6. DeleteQueue\n";
	    cout << "\n7. Exit\n\n";
	    
	    cin >> flag;
	    switch(flag) {/*
	    	case 1: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pS = new TStack(d, head1);
				break;
			}*/
			
			case 2: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pQ.Add(d);
				break;
			}
			
			case 3: {
				system("cls");
				cout << "Your queue (from beginning):\n";
				pQ.Show(1);
				system("pause");
				break;
			}
			
			case 4: {
				system("cls");
				cout << "Your queue (from end):\n";
				pQ.Show(0);
				system("pause");
				break;
			}
			/*
			case 5: {
				system("cls");
				//((YoungS*)head1)->Del();
				pS->Del_S(head1);
				cout << "Your del stack:\n";
				pS->PrintStack(head1);
				system("pause");
				break;
			}
			
			case 6: {
				system("cls");
				pQ->Del_Q(head2);
				cout << "Your del queue:\n";
				pQ->PrintQueue(head2);
				system("pause");
				break;
			}*/
			
			case 7: {
				return 0;
				break;
			}
		}
		system("cls");
	}
}





