#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}


void deleteAtBeginning(Node*& head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}


void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

 
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "Linked List after insertions: " << endl;
    printList(head);

    
    cout << "After deleting the first node:" << endl;
    deleteAtBeginning(head);
    printList(head);

    return 0;
}