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
	srand(time(NULL));
	list *head, *p;
	head = NULL;
	
	int n;
	cout << "Enter size of mass: ";
	cin >> n;
	cout << "\n";
	int A[n];
	for(int i = 1; i <= n; i++) {
		A[i] = rand() % 100;
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

	cout << "\nList with full squads:\n\n";
	PrintList(head);
	int size = Size(head);
	cout << "\n" << size << endl;
	if (size > 1) {
		int i = 1, j;
		list *buf;
		for(p = head; p->next != NULL; p = p->next) {
			j = i + 1;
			for(buf = p->next; buf != NULL; buf = buf->next) {
				if(p->data == buf->data) {
					Del(head, j);
				}
				j++;
			}
			cout << p->data << " ";
			i++;
		}
	}
	cout << "\nList without copy squads:\n\n";
	PrintList(head);
	size = Size(head);
	cout << "\n" << size << endl;
	system("pause");
	return 0;
}





