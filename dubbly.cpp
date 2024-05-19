#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prv;
    node* next;
    node(int d){
        this->data=d;
        this->prv=NULL;
        this->next=NULL;
    }

};
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    print(head);
    return 0;
}