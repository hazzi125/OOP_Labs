#include <iostream>
#include <cstring>
#include <graphics.h>
#include "head.h"
#include "methods.cpp"
using namespace std;

int main() {
	system("color 0A");
	initwindow(800, 600);
	int d;
	char flag;
	TQueue pQ;
	TStack pS;
	
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
	    
	    cin >> flag;
	    switch(flag) {
	    	case '1': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pQ.Add(d);
				break;
			}
			
	    	case '2': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pS.Add(d);
				break;
			}
			
			case '3': {
				system("cls");
			    cout << "Your queue:\n";
				pQ.Show();
				break;
			}
			
			case '4': {
				system("cls");
				cout << "Your stack:\n";
				pS.Show();
				break;
			}
			
			case '5': {
				system("cls");
				pQ.Del(1);
				cout << "Your headless queue:\n";
				pQ.Show();
				cout << "\n";
				break;
			}
			
			case '6': {
				system("cls");
				pQ.Del(0);
				cout << "Your tailless queue:\n";
				pQ.Show();
				cout << "\n";
				break;
			}
			
			case '7': {
				system("cls");
				pS.Del(1);
				cout << "Your headless stack:\n";
				pS.Show();
				break;
			}
			
			case '8': {
				system("cls");
				pS.Del(1);
				cout << "Your tailless stack:\n";
				pS.Show();
				break;
			}
			
			case '9': {
				return 0;
				break;
			}
		}
		system("cls");
	}
}





