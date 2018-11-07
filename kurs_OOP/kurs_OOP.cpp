#include <iostream>
#include <cstring>
#include <graphics.h>
#include "head.h"
#include "methods.cpp"
using namespace std;

template <typename T> void Switched(TQueue<T> Q, TStack<T> S, TList<T> *&pL) {
	T d;
	char flag2;
	for( ; ; ) {
	    cout << "1. Queue\n";
	    cout << "2. Stack\n\n";
	    cout << "3. Print queue\n";
	    cout << "4. Print stack\n\n";
	    cout << "5. Delete queue from the beginning\n";
	    cout << "6. Delete queue from the end\n";
	    cout << "7. Delete stack from the beginning\n";
	    cout << "8. Delete stack from the end\n";
	    cout << "\n9. Exit\n\n";
	    
	    cin >> flag2;
	    switch(flag2) {
	    	case '1': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pL = &Q;
	    		pL->Add(d);
				break;
			}
			
	    	case '2': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pL = &S;
	    		pL->Add(d);
				break;
			}
			
			case '3': {
				system("cls");
			    cout << "Your queue:\n";
				pL = &Q;
	    		pL->Show();
				break;
			}
			
			case '4': {
				system("cls");
				cout << "Your stack:\n";
				pL = &S;
	    		pL->Show();
				break;
			}
			
			case '5': {
				system("cls");
				pL = &Q;
				pL->Del(1);
				cout << "Your headless queue:\n";
				pL->Show();
				cout << "\n";
				break;
			}
			
			case '6': {
				system("cls");
				pL = &Q;
				pL->Del(0);
				cout << "Your tailless queue:\n";
				pL->Show();
				cout << "\n";
				break;
			}
			
			case '7': {
				system("cls");
				pL = &S;
				pL->Del(1);
				cout << "Your headless stack:\n";
				pL->Show();
				break;
			}
			
			case '8': {
				system("cls");
				pL = &S;
				pL->Del(1);
				cout << "Your tailless stack:\n";
				pL->Show();
				break;
			}
			
			case '9': {
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
	
	cout << "Choose your type:\n";
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
	        TList<int> *pL;
			Switched(Q, S, pL);
			break;
		}
		
		case '2': {
			TQueue<float> Q;
	        TStack<float> S;
	        TList<float> *pL;
			Switched(Q, S, pL);
			break;
		}
		
		case '3': {
			TQueue<double> Q;
	        TStack<double> S;
	        TList<double> *pL;
			Switched(Q, S, pL);
			break;
		}
		
		case '4': {
			TQueue<char> Q;
	        TStack<char> S;
	        TList<char> *pL;
			Switched(Q, S, pL);
			break;
		}
		
		default: {
			cout << "Sorry, buy :(\n";
			system("pause");
			return 0;
		}
	}
}
