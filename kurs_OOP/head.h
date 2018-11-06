#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <cstring>
using namespace std;

template <typename Type> struct Node {
	Type data;
	Node *next, *prew;
};

template <typename Type> class TList {	
public:
	virtual void Add(Type d) {}
	virtual void Show() {}
	virtual void Del(bool flag) {}
};

template <typename Type> class TQueue: public TList <Type> {
private:
	Node<Type> *head, *tail;
	
public:
	TQueue();
	void Add(Type d);
	void Show();
	void Del(bool flag);
};

template <typename Type> class TStack: public TList <Type> {
private:
	Node<Type> *head, *tail;
	
public:
	TStack();
	void Add(Type d);
	void Show();
	void Del(bool flag);
};

#endif

