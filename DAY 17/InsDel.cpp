#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int data){
            val=data;
            next=NULL;
        }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
    head=NULL;
    }
void insertAtLast(int value){
    Node* new_node=new Node(value);
    if(head==NULL){
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //reached at last node
    temp->next=new_node;
 }
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    }
};
void deleteAlternateNodes(Node* &head){
 Node* currentNode=head;
 while(currentNode!=NULL && currentNode->next!=NULL){
 Node* temp=currentNode->next;//this is to be deleted
 currentNode->next=currentNode->next->next;
 free(temp);
 currentNode=currentNode->next;
 }
}
int main(){
    LinkedList linkedList;
    linkedList.insertAtLast(1);
    linkedList.insertAtLast(2);
    linkedList.insertAtLast(3);
    linkedList.insertAtLast(4);
    linkedList.insertAtLast(5);
    linkedList.display();
    deleteAlternateNodes(linkedList.head);
    linkedList.display();
    return 0;
    }
