#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
class LinkedList{
public:
	node *head=NULL;
	void insertNode(){
		int val;
		cin>>val;
		node *newNode=new node;
		newNode->data=val;
		newNode->next=NULL;
		if(head==NULL)
		head=newNode;
		else{
			node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}
	}
	int getlengthiterative(){
		int len=0;
		node*temp=head;
		while(temp!=NULL){
			len++;
			temp=temp->next;
		}
		return len;
	}
	int getlengthRecursive(node *no){
		if(no==NULL)
		return 0;
		else
		return 1+getlengthRecursive(no->next);
		
	}
	void reverse(){
	    node*pnode=NULL;
	    node*cnode=head;
	    node*nnode=NULL;
	    while(cnode!=NULL){
	        nnode=cnode->next;
	        cnode->next=pnode;
	        pnode=cnode;
	        cnode=nnode;
	    }
	    head=pnode;
	}
	void display(){
	    node*temp=head;
	    while(temp!=NULL){
	        cout<<temp->data<<" ";
	        temp=temp->next;
	    }
	    cout<<endl;
	}
	void reverserecursive(node *nod){
	    if(nod==NULL)
	    return ;
	        reverserecursive(nod->next);
	        cout<<nod->data<<" ";
	    
	}
};
int main() {
	LinkedList list;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		list.insertNode();
	}
	cout<<list.getlengthiterative()<<endl;
	cout<<list.getlengthRecursive(list.head)<<endl;
	list.reverse();
	list.display();
	list.reverserecursive(list.head);
	return 0;
}
