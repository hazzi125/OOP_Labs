#include "head.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a;
	cin >> a;
	TNum obj1(a);
	
	char c[100];
	cin >> c;
	TStr obj2(c);
    
    cout << endl;
    obj1.Output();
    cout << endl;
	obj2.Output();
	system("pause");
	return 0;
}
