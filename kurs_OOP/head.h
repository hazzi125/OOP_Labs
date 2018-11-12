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
	void Print(int &x, int &y, bool &flag);
	virtual void Add(Type d) {}
	virtual void Show() {}
	virtual void Del(bool flag) {}
};

template <typename Type> class TQueue: public TList<Type> {
private: 
    Node<Type> *head, *tail;
public:
	TQueue(): head(NULL), tail(NULL) {}
	void Add(Type d);
	void Show();
	void Del(bool flag);
};

template <typename Type> class TStack: public TList<Type> {
private:
	Node<Type> *head, *tail;
public:
	TStack(): head(NULL), tail(NULL) {}
	void Add(Type d);
	void Show();
	void Del(bool flag);
};

template <typename Type> class TCycle: public TList<Type> {
private:
	Node<Type> *head;
public:
	TCycle(): head(NULL) {}
	void Add(Type d);
	void Show();
	void Del(bool flag);
};

#endif
