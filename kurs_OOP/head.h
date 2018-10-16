#include <iostream>
#include <cstring>
using namespace std;

class TList {
protected:
	int data;
	char str[100] = "---";
	TList *next;

public:
	void Output() {
		cout << "! " << data << "\n";
		cout << "! " << str << "\n";
	}
};

class TNum: public TList {
public:
	TNum(int d) {
		data = d;
	}
};

class TStr: public TList {
public:
	TStr(char s[]) {
		data = 0;
		strcpy(str, s);
	}
};
