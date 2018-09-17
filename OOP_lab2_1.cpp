#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

struct list {
	int data;
	list *next;
};

int Size(list *&head) {
	int s = 0;
	list *p;
	for(p = head; p; p = p->next) 
		s++;
	return s;
}

void PrintList(list *&head) {
	list *p = new list;
	for(p = head; p; p = p->next) 
		cout << p->data << " ";
	cout << endl;
}

void Del(list *&head, int n) {
	list *p, *temp;
	p = head;
	if(n == 1) {
		head = head->next;
		delete(p);
	}
	else {
		for(int i = 2; i < n; i++)
			p = p->next;
		temp = p;
		p = p->next;
		temp->next = temp->next->next;
		delete(p);
	}

}

void Add(list *&head, int n, int d) {
	list *p1, *p2;
	p1 = head;
	p2 = new list;
	p2->data = d;
	
	for(int i = 1; i < n; i++)
		p1 = p1->next;
	p2->next = p1->next;
	p1->next = p2;
}

void Swap(list *&head, int x1, int x2) {
	list *p1, *p2, *prew;
	
	if(x1 == 1) {
		p1 = p2 = head;
		for(int i = 1; i < x2; i++)
			p2 = p2->next;
		head = head->next;
		p1->next = p2->next;
		p2->next = p1;
	}
	
	else {
		if (x1 < x2) {
			prew = head;
			for(int i = 1; i < x1-1; i++)
				prew = prew->next;
			p1 = prew->next;
			p2 = p1;
			for(int i = x1; i < x2; i++)
				p2 = p2->next;
				
			prew->next = p1->next;
			p1->next = p2->next;
			p2->next = p1;
		}
	
		else {
			p2 = head;
			for(int i = 1; i < x2-1; i++)
				p2 = p2->next;
			prew = p2;
			for(int i = x2; i < x1; i++)
				prew = prew->next;
			p1 = prew->next;
			
			prew->next = p1->next;
			p1->next = p2->next;
			p2->next = p1;
		}
	}
}

int main() {
	list *head, *p;
	head = NULL;
	
	int n;
	cout << "Enter size of mass: ";
	cin >> n;
	cout << "\n";
	int A[n];
	for(int i = 1; i <= n; i++) {
		A[i] = i;
		cout << A[i] << " ";
	}
	cout << "\n";
	
	int k = 1;
	for(int i = 2; i <= n; i++) {
		if(int(sqrt(A[i])) == sqrt(A[i])) {
			if(head == NULL) {
				p = new list;
				p->data = A[i];
				p->next = head;
				head = p;
			}
			else {
				Add(head, k, A[i]);
				k++;
			}
		}
	}
	PrintList(head);
	cout << "\n\nList with full squads:\n";
	
	system("pause");
	return 0;
}





