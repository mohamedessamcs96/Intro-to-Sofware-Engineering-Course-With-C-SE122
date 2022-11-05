#include<iostream>



using namespace std;

class Node{
public:
    int value;
    Node* Next;   // int *x;  variable address store non premetive data type called node 
};


void PrintList(Node *n){
    while(n!=NULL){
        cout<<n->value<<",";
        n=n->Next;
    }
}

int main(){

    Node *head=new Node();
    Node *second=new Node();
    Node *third=new Node();

    head->value=1;
    head->Next=second;
    
    second->value=20;
    second->Next=third;

    third->value=30;
    third->Next=NULL;

    PrintList(head);

    return 0;
}