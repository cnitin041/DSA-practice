#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;

    }

    //distroctor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memoery is re;eased"<<value<<endl;
    }

};

void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
   node* temp=new node(d);
   tail->next=temp;
   tail=temp;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void customeinsert(node* &tail,node* &head,int position,int d){
    //inser at start
    if(position==1){
        insertathead(head,d);
        return ;
    }
    node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;

    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }

    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void deleten(node* &head,int position){
    if (position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;


    }
    else{
        node* curr=head;
        node* prv=NULL;
        int count=1;
        while(count<position){
            prv=curr;
            curr=curr->next;
            count++;

        }
        prv->next=curr->next;
        curr->next=NULL;
        delete curr;


    }
}


int main(){
    node* node1=new node(10);
    cout<<node1->data<<endl;
    node* head=node1;
    node* tail=node1;


    insertattail(tail,20);
    print(head);
    customeinsert(tail,head,3,10);
    print(head);
    customeinsert(tail,head,4,12);
    print(head);
    

    deleten(head,2);
    print(head);



   

    return 0;

}