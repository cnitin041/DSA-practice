#include<iostream>
using namespace std;
class node{
    public:
     node* next;
     int data;
     node(int data){
        this->data=data;
        this->next=NULL;
     }
};

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

}
void ins(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head=temp;

}

int main(){
    node* node1=new node(1);
    cout<<node1->data<<" ";
    node* head=node1;
    print(head);
    ins(head,10);
    print(head);


}