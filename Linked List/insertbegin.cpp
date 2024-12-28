#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; 

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "Linked List: ";
    printList(head);

    return 0;
}
