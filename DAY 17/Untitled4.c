#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
Node* remove_duplicate(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *temp=head->next;
    Node *prev=head;
    while(temp!=NULL){
        if(prev->data==temp->data){
            prev->next=temp->next;
            temp=temp->next;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}
int main(){
    int n;
    cout<<"Enter Total Number of Elements:";
    cin>>n;
    Node* head=NULL;
    Node* n12=new Node(1);
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* n1=new Node(x);
        Node* temp=head;;
        if(head==NULL){
            n1->next=head;
            head=n1;
        }
        else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n1;
        }
    }
    remove_duplicate(head);
    n12->display(head);


}
