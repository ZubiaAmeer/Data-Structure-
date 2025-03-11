#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* Next;
};
void insertAtEnd(Node*& head ,int newData)
{
	Node* newNode=new Node ();
	newNode->data=newData;
	newNode->Next=NULL;
if(head == NULL){
	head=newNode;
}
else{
	Node*temp=head;
	while(temp->Next!=NULL){
	temp=temp->Next;	
	}
	temp->Next=newNode;
}	
}
	void printList(Node*head){
		while(head!=NULL){
			cout<<head->data<<"->";
			head=head->Next;
		}
		cout<<"Null"<<endl;
	}	
	int main(){
		Node* head=NULL;
		insertAtEnd(head,20);
		insertAtEnd(head,30);
		insertAtEnd(head,40);
		cout<<"initial list"<<endl;
		printList(head);
		insertAtEnd(head,90);
		cout<<"After inserting 90 at the end"<<endl;
			printList(head);
				
			return 0;
			}