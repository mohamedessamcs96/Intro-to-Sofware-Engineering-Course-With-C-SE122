#include<iostream>



using namespace std;

class Node{
public:
    Node*next;    
    
    int val;
    
    Node*prev;
};


int main(){

    Node * head;
    Node * tail;

    //first node
    Node * node =new Node();
    node->val=5;
    node->next=nullptr;
    node->prev=nullptr;

    head=node;
    tail=node;
    //second node
    node=new Node();
    node->val=6;
    node->next=nullptr;
    node->prev=node;

    tail=node;



    return 0;
}