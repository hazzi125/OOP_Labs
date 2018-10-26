#include <iostream>
#include <cstring>
#include "head.h"
#include "methods.cpp"
using namespace std;

int main() {
	system("color 0A");
	int d, flag;
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
	    	case 1: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pQ.Add(d);
				break;
			}
			
	    	case 2: {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		cin >> d;
	    		pS.Add(d);
				break;
			}
			
			case 3: {
				system("cls");
				cout << "Your queue:\n";
				cout << "From beginning: ";
				pQ.Show(1);
				cout << "From end:       ";
				pQ.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 4: {
				system("cls");
				cout << "Your stack:\n";
				cout << "From beginning: ";
				pS.Show(1);
				cout << "From end:       ";
				pS.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 5: {
				system("cls");
				pQ.Del(1);
				cout << "Your headless queue:\n";
				cout << "From beginning: ";
				pQ.Show(1);
				cout << "From end:       ";
				pQ.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 6: {
				system("cls");
				pQ.Del(0);
				cout << "Your tailless queue:\n";
				cout << "From beginning: ";
				pQ.Show(1);
				cout << "From end:       ";
				pQ.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 7: {
				system("cls");
				pS.Del(1);
				cout << "Your headless stack:\n";
				cout << "From beginning: ";
				pS.Show(1);
				cout << "From end:       ";
				pS.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 8: {
				system("cls");
				pS.Del(0);
				cout << "Your tailless stack:\n";
				cout << "From beginning: ";
				pS.Show(1);
				cout << "From end:       ";
				pS.Show(0);
				cout << "\n";
				system("pause");
				break;
			}
			
			case 9: {
				return 0;
				break;
			}
		}
		system("cls");
	}
}





