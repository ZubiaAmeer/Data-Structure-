#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void insertAtBegining(Node*&head ,int newData)
{
	Node* newNode= new Node();
	newNode->data= newData;
	newNode->next=head;
	head=newNode;	
	}	
	void printList(Node*head){
		while(head!=NULL){
			cout<<head->data<<"->";
			head=head->next;
		}
		cout<<"Null"<<endl;
	}	
	int main(){
		Node* head=NULL;
		insertAtBegining(head,20);
		insertAtBegining(head,30);
		insertAtBegining(head,40);
		cout<<"initial list"<<endl;
		printList(head);
		insertAtBegining(head,5);
		cout<<"After inserting 5 at the begining"<<endl;
			printList(head);
				
			return 0;
			}