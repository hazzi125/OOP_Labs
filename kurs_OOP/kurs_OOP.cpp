#include <iostream>
#include <cstring>
#include <graphics.h>
#include <typeinfo>
#include "head.h"
#include "methods.cpp"
using namespace std;

template <typename T> void Switched(TQueue<T> Q, TStack<T> S, TCycle<T> C, TList<T> *&pL) {
	system("cls");
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
	    		if(typeid(T) == typeid(int)) {
	    			char str[12];
	    		    cin >> str;
	    		    bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if(isdigit(str[i]) == 0) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						int d = atoi(str);
						pL = &Q;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(float)) {
					char str[24];
					cin >> str;
					bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if((isdigit(str[i]) == 0) && (str[i] != '.')) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						float d = atof(str);
						pL = &Q;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(char)) {
					char d;
					cin >> d;
					pL = &Q;
		    		pL->Add(d);
				}
				
				break;
			}
			
	    	case 'b': {
	    		system("cls");
	    		cout << "Enter elem: ";
	    		if(typeid(T) == typeid(int)) {
	    			char str[12];
	    		    cin >> str;
	    		    bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if(isdigit(str[i]) == 0) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						int d = atoi(str);
						pL = &S;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(float)) {
					char str[24];
					cin >> str;
					bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if((isdigit(str[i]) == 0) && (str[i] != '.')) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						float d = atof(str);
						pL = &S;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(char)) {
					char d;
					cin >> d;
					pL = &S;
		    		pL->Add(d);
				}
				break;
			}
			
			case 'c': {
	    		system("cls");
	    		system("cls");
	    		cout << "Enter elem: ";
	    		if(typeid(T) == typeid(int)) {
	    			char str[12];
	    		    cin >> str;
	    		    bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if(isdigit(str[i]) == 0) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						int d = atoi(str);
						pL = &C;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(float)) {
					char str[20];
					cin >> str;
					bool fl = 1;
					for(int i = 0; str[i] != '\0'; i++) {
					    if((isdigit(str[i]) == 0) && (str[i] != '.')) {
					      fl = 0;
						  break;
					    }
					}
					if(fl) {
						float d = atof(str);
						pL = &C;
		    			pL->Add(d);
					}
				}
				
				else if(typeid(T) == typeid(char)) {
					char d;
					cin >> d;
					pL = &C;
		    		pL->Add(d);
				}
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
	
	char flag1, init;
	
	cout << "Choose your type:\n\n";
	cout << "1. Int\n";
	cout << "2. Float\n";
	cout << "3. Char\n";
	cin >> flag1;
	system("cls");
	
	switch(flag1) {
		case '1': {
		    system("cls");
		    cout << "Do you want to fill the list with initial values? 1/0 ";
		    cin >> init;
		    if(init == '1') {
		    	char s[12];
		    	cout << "Enter initual value: ";
		    	cin >> s;
                bool fl = 1;
				for(int i = 0; s[i] != '\0'; i++) {
				    if(isdigit(s[i]) == 0) {
				        fl = 0;
						break;
					}
				}
				if(fl) {
				    int i = atoi(s);
				    TQueue<int> Q(i);
	                TStack<int> S(i);
	                TCycle<int> C(i);
	                TList<int> *pL;
			        Switched(Q, S, C, pL);
				}	
			}
			else {
				TQueue<int> Q;
	            TStack<int> S;
	            TCycle<int> C;
	            TList<int> *pL;
			    Switched(Q, S, C, pL);
			}
			break;
		}
		
		case '2': {
			system("cls");
		    cout << "Do you want to fill the list with initial values? 1/0 ";
		    cin >> init;
		    if(init == '1') {
		    	char s[24];
		    	cout << "Enter initual value: ";
		    	cin >> s;
                bool fl = 1;
				for(int i = 0; s[i] != '\0'; i++) {
				    if((isdigit(s[i]) == 0) && (s[i] != '.')) {
				        fl = 0;
						break;
					}
				}
				if(fl) {
				    float f = atof(s);
				    TQueue<float> Q(f);
	                TStack<float> S(f);
	                TCycle<float> C(f);
	                TList<float> *pL;
			        Switched(Q, S, C, pL);
				}	
			}
			else {
			    TQueue<float> Q;
	            TStack<float> S;
	            TCycle<float> C;
	            TList<float> *pL;
			    Switched(Q, S, C, pL);	
			}
			break;
		}
		
		case '3': {
			cout << "Do you want to fill the list with initial values? 1/0 ";
		    cin >> init;
			if(init == '1') {
				cout << "Enter initual: ";
				char d;
			    cin >> d;
			    TQueue<char> Q(d);
	            TStack<char> S(d);
	            TCycle<char> C(d);
	            TList<char> *pL;
			    Switched(Q, S, C, pL);
			}
			else {
				TQueue<char> Q;
		        TStack<char> S;
		        TCycle<char> C;
		        TList<char> *pL;
				Switched(Q, S, C, pL);
			}
			break;
		}
		
		default: {
			cout << "Sorry, buy :(\n";
			system("pause");
			return 0;
		}
	}
}
