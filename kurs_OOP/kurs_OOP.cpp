#include "head.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
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
	p->PrintList(head);
	system("pause");
	return 0;
}
