
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next
};
void addToCircularlist(Node*& head, int value) {
    Node*newNode = newNode;
    newNode->data = value;
    
    if(!head){
        newNode->next = newNode;
        head = newNode;
    }else(
        Node*temp = head;
        while (temp-> next = newNode;
        temp = temp->next ! = head) {
            temp = temp->next;
        }
        temp->next =newNode;
        newNode->next=head;
   }    
}

void updateValue(Node*head*, int oldValue, int newValue) {
    if (!head) {
        return;
    }
Node*current =head;
do{
}
