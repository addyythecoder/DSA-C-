#include <iostream> 
using namespace std;

class Node {
	public: 
		int data;
		Node *next;
};

main() {
	Node *HEAD = NULL;
	HEAD = new Node();
	
	HEAD->data = 25;
	HEAD->next = NULL;
	
	Node *n1 = new Node();
	n1->data = 30;
	n1->next = NULL;
	HEAD->next = n1;
	
	Node *n2 = new Node();
	n2->data = 35;
	n2->next = NULL;
	n1->next = n2;
	
	Node *n3 = new Node();
	n3->data = 40;
	n3->next = NULL;
	n2->next = n3;
	
	cout << "  Head -> Value:- " << HEAD->data <<", Address:-" << HEAD->next << endl;
	cout << "Node 1 -> Value:- " << n1->data <<", Address:-" << n1->next << endl;
	cout << "Node 2 -> Value:- " << n2->data <<", Address:-" << n2->next << endl;
	cout << "Node 3 -> Value:- " << n3->data <<", Address:-" << n3->next << endl;
}
