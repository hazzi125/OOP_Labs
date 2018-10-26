#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <cstring>
using namespace std;

struct Node {
	int data;
	Node *next, *prew;
};

class TQueue {
private:
	Node *head, *tail;
public:
	TQueue();
	void Add(int d);
	void Show(bool flag);
	void Del(bool flag);
};

class TStack {
private:
	Node *head, *tail;
public:
	TStack();
	void Add(int d);
	void Show(bool flag);
	void Del(bool flag);
};

#endif

