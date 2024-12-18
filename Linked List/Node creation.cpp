#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main() {
    // Node node1;
    // node1.data=12;
    // node1.next=NULL;
    Node *node1=new Node(12);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    return 0;
}