#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};

void insertAtEnd(Node*&head, int newData){
	Node* newNode = new Node;
	newNode->data = newData;
	newNode->next = NULL;

if(head==NULL){
	head = newNode;
}
else{

Node* temp = head;
while(temp->next!=NULL){
	temp = temp->next;
}
temp->next = newNode;
}
}

void insertAtPosition(Node*&head, int newData, int position){
	if(position<0){
		cout<<"Invalid position:"<<endl;
		return;
	}
	Node* newNode= new Node();
	newNode->data = newData;
	if(position==0){
		newNode->next = head;
		head = newNode;
		return;
	}
	Node* temp = head;
	for(int i = 0;i<position-1 && temp!=NULL ;i++){
		temp = temp->next;
	}

	newNode->next=temp->next;
	temp->next=newNode;
}
void Printlist(Node*head){
	while(head!=NULL){
		cout<< head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	Node* head = NULL;
	insertAtEnd(head, 10);
	insertAtEnd(head,20);
	insertAtEnd(head, 30);
	 Printlist(head);
	 cout<<"After addition in specific position:"<<endl;
	 insertAtPosition(head,70,2);
	 Printlist(head);
return 0;
}
