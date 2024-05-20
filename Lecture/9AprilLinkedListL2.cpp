#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(){
        this->data=0;
        this->pre=NULL;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }

    ~Node(){
        cout<<"Node with value "<<this->data<<" deleted"<<endl;

    }

};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    Node* newNode=new Node(data);

    newNode->next=head;

    head->pre=newNode;

    head=newNode;

}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }

    Node* newNode=new Node(data);

    tail->next=newNode;

    newNode->pre=tail;

    tail=newNode;     
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }

    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }

    int len=getLength(head);

    if(position>len){
        insertAtTail(head,tail,data);
        return ;
    }

    int i=1;
    Node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
            }
        Node* curr=prevNode->next;

        Node* newNode=new Node(data);

        prevNode->next=newNode;
        newNode->pre=prevNode;
        newNode->next=curr;
        curr->pre=newNode;    
}

void deleteFromPos(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return ;
    }

    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return ;
    }
    int len=getLength(head);
    if(position>len){
        cout<<"please enter a valid position "<<endl;
        return ;
    }

    if(position==1){
        Node* temp=head;
        head=head->next;
        head->pre==NULL;
        temp->next=NULL;
        delete temp;
        return ;
    }

    if(position==len){
        Node* temp=tail;
        tail=tail->pre;
        temp->pre=NULL;
        tail->next=NULL;
        delete temp;
        return ;
   }

   int i=1;
   Node* left=head;
   while(i<position-1){
      left=left->next;
      i++;
   }
   Node* curr=left->next;
   Node* right=curr->next;

   left->next=right;

   right->pre=left;

   curr->next=NULL;
   curr->pre=NULL;
   delete curr;
}

int main(){

    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* head=first;
    Node* tail=third;

    first->next=second;
    second->pre=first;

    second->next=third;
    third->pre=second;

   // print(first);
   // cout<<endl;

    insertAtHead(head,tail,101);
    // cout<<endl;
    // print(head);

   // cout<<endl;

    insertAtTail(head,tail,501);
    // cout<<endl;
    // print(head);

   // cout<<endl;

    insertAtPosition(head,tail,601,5);
   // cout<<endl;
    print(head);
    cout<<endl;

    deleteFromPos(head,tail,2);
    cout<<endl;
    print(head);
    cout<<endl;


    return 0;
}
