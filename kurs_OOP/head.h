#include <iostream>
#include <cstring>
using namespace std;

class TList {
protected:
	TList *next;
};

class TNum: public TList {
private:
	int data;
	
public:
	TNum(int d, TNum *&head) {
		data = d;
		this->next = head;
		head = this;
	}
	
	void PrintList(TNum *&head) {
		TNum *p;
		for(p = head; p != NULL; p = p->next) 
			cout << p->data << " ";
		cout << endl;
	}
};

class TStr: public TList {
private:
	char str[100];
	
public:
	TStr(char s[]) {
		strcpy(str, s);
	}
};
