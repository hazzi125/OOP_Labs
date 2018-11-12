#include <iostream>
#include <cstring>
#include <graphics.h>
#include "head.h"
#include "methods.cpp"
using namespace std;

template <typename T> void Switched(TQueue<T> Q, TStack<T> S, TCycle<T> C, TList<T> *&pL) {
	T d;
	char flag2;
	for( ; ; ) {
		cout << "Choose your action:\n\n";
	    cout << "a. Queue\n";
	    cout << "b. Stack\n";
	    cout << "c. Cycle\n\n";
	    cout << "d. Print queue\n";
	    cout << "e. Print stack\n";
	    cout << "f. Print cycle\n\n";
	    cout << "g. Delete queue from the beginning\n";
	    cout << "h. Delete queue from the end\n\n";
	    cout << "i. Delete stack from the beginning\n";
	    cout << "j. Delete stack from the end\n\n";
	    cout << "k. Delete cycle from the beginning\n";
	    cout << "l. Delete cycle from the end\n\n";
	    cout << "m. Exit\n\n";
	    
	    cin >> flag2;
	    switch(flag2) {
	    	case 'a': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pL = &Q;
	    		pL->Add(d);
				break;
			}
			
	    	case 'b': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pL = &S;
	    		pL->Add(d);
				break;
			}
			
			case 'c': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pL = &C;
	    		pL->Add(d);
				break;
			}
			
			case 'd': {
				system("cls");
			    cout << "Your queue:\n";
				pL = &Q;
	    		pL->Show();
				break;
			}
			
			case 'e': {
				system("cls");
				cout << "Your stack:\n";
				pL = &S;
	    		pL->Show();
				break;
			}
			
			case 'f': {
				system("cls");
				cout << "Your cycle:\n";
				pL = &C;
	    		pL->Show();
				break;
			}
			
			case 'g': {
				system("cls");
				pL = &Q;
				pL->Del(1);
				cout << "Your headless queue:\n";
				pL->Show();
				cout << "\n";
				break;
			}
			
			case 'h': {
				system("cls");
				pL = &Q;
				pL->Del(0);
				cout << "Your tailless queue:\n";
				pL->Show();
				cout << "\n";
				break;
			}
			
			case 'i': {
				system("cls");
				pL = &S;
				pL->Del(1);
				cout << "Your headless stack:\n";
				pL->Show();
				break;
			}
			
			case 'j': {
				system("cls");
				pL = &S;
				pL->Del(0);
				cout << "Your tailless stack:\n";
				pL->Show();
				break;
			}
			
			case 'k': {
				system("cls");
				pL = &C;
				pL->Del(1);
				cout << "Your headless cycle:\n";
				pL->Show();
				break;
			}
			
			case 'l': {
				system("cls");
				pL = &C;
				pL->Del(0);
				cout << "Your tailless cycle:\n";
				pL->Show();
				break;
			}
			
			case 'm': {
				return;
				break;
			}
		}
		system("cls");
	}
}

int main() {
	system("color 0A");
	initwindow(800, 600);
	
	char flag1;
	
	cout << "Choose your type:\n\n";
	cout << "1. Int\n";
	cout << "2. Float\n";
	cout << "3. Double\n";
	cout << "4. Char\n";
	cin >> flag1;
	system("cls");
	
	switch(flag1) {
		case '1': {
			TQueue<int> Q;
	        TStack<int> S;
	        TCycle<int> C;
	        TList<int> *pL;
			Switched(Q, S, C, pL);
			break;
		}
		
		case '2': {
			TQueue<float> Q;
	        TStack<float> S;
	        TCycle<float> C;
	        TList<float> *pL;
			Switched(Q, S, C, pL);
			break;
		}
		
		case '3': {
			TQueue<double> Q;
	        TStack<double> S;
	        TCycle<double> C;
	        TList<double> *pL;
			Switched(Q, S, C, pL);
			break;
		}
		
		case '4': {
			TQueue<char> Q;
	        TStack<char> S;
	        TCycle<char> C;
	        TList<char> *pL;
			Switched(Q, S, C, pL);
			break;
		}
		
		default: {
			cout << "Sorry, buy :(\n";
			system("pause");
			return 0;
		}
	}
}
