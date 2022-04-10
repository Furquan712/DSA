#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	    int data;
	    node* next;
};
int main(){
	node n;
	n.data=1;
	n.next=NULL;

	node n1;
	n1.data=2;
	n1.next=NULL;

	n.next=&(n1);

    cout<<n.data<<"-->";
    cout<<(*n.next).data<<endl;

    cout<<n.data<<"-->";
    cout<<(n.next)->data<<endl;
    return 0;
}