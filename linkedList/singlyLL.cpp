#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* nextNode;

    Node(int d, Node* n) : data(d), nextNode(n){};
};

void printList(Node* head) {
    if (head == NULL) {
        cout << "the list is empty" << endl;
    }

    Node* ptr = head;
    cout << endl;

    while(ptr != nullptr){
        (ptr->nextNode == nullptr) ? 
            cout << "[" << ptr->data << "]" << "[" << ptr->nextNode << "]"
            : cout << "[" << ptr->data << "]" << "[" << ptr->nextNode << "]" << " ---> ";
        ptr = ptr->nextNode;
    }

    cout << endl;
}

void insertAtEnd(int data, Node* head) {
    if (head == nullptr) {
        head = new Node(data, nullptr);
    }

    Node* lastNode = head;
    while (lastNode->nextNode != nullptr) {
        lastNode = lastNode->nextNode;
    }

    lastNode->nextNode = new Node(data, nullptr);
}

void insertAtFront(int data, Node*& head) {
    if (head == nullptr) {
        head = new Node(data, nullptr);
    }

    Node* ptr = new Node(data, nullptr);
    ptr->nextNode = head;
    head = ptr;
}

int main() {
    Node* head = new Node(1, nullptr);

    head->nextNode = new Node(2, nullptr);

    head->nextNode->nextNode = new Node(3, nullptr);

    insertAtEnd(4, head);

    insertAtFront(0, head);

    printList(head);

}