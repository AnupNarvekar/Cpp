#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node * link;
};

int main(){

    Node* head = (Node*) malloc(sizeof(Node)); // using malloc(sineInBytes)
    // Node* head = (Node*) calloc(1, sizeof(Node)); // using calloc(count, sizeInBytes)

    /*
        Head is a pointer variable because it will be storing the addres of a Node.
        Head is of Node datatype because it will be storing address of a memory which is of Node datatype;
        malloc accepts sizeof(Node) and returns a null pointer pointing to base address of the allocated block of memory
            The null pointer needs to be typecasted to Node* here because the head variable is of Node* data type

    */

    cout << head << endl; // head stores the addres of first byte of memory returned by malloc

    // *head is the empty Node = [data][link]

    (*head).data = 5;
    (*head).link = nullptr;

    cout << &(*head).data << endl; // address of data
    cout << &(*head).link << endl; // address of link

    // using the arrow operator
    head->data = 81;
    head->link = nullptr;

    free(head); // free memeory pointed by passed pointer argument
    
}