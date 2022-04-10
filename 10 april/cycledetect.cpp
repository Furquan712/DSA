#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};
//////////////////////// CLASS NODE ///////////////////////

void InsertAtBegin(node* &head, node* &tail, int data) {
	if (!head) { // Iska mtlb hai pehli node aa rhi hai toh head & tail both will update
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n -> next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;

}

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt ++;
		head = head->next;
	}
	return cnt;
}

void InsertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		InsertAtBegin(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		InsertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp -> next;
		}
		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}


void Bubblesort(node* &head){
	int l=length(head);
	node* c,*p,*l;
	for(int i=0;i<l-1;i++){

		c=head;
		p=NULL;
		while(c and c->next){
			if(c->data>c->next->data){
				if(p==NULL){
					n=c->next;
					c->next=n->next;
					n->next=c;
					head=p=n;
				}
				else{
					n=c->next;
					c->next=n->next;
					n->next=c;
					p->next=n;
					p=n;
				}
			}
			else{
				p=c;
				c=c->next;
			}
		}
	}
}
int main(){


	node* head, *tail;
	head = tail = NULL;


	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);

	printLL(head);
}