#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        cout<<"Node with value :"<<this->data<<" deleted "<<endl;
        }
};


// void print(Node * &head){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }




//i want to insert a node right at the end of linked list
void insertAtTail(Node* &head, Node* &tail,int data){
    Node*  newNode=new Node(data);
    if(tail==NULL){
        tail=newNode;
        head=newNode;
    }
    else{
        tail->next=newNode;
    }

    tail=newNode;
    }


 void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//i want to insert a node right at the head of linked list
void insertAtHead(Node* &head,Node* &tail ,int data){
    //step 1:
    Node* newNode=new Node(data);
    //step 2:
    newNode->next=head;
    //step 3:
    if(head==NULL){
        tail=newNode;
    }
    head=newNode;
}


int findLength(Node* &head){
    int l=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}





void insertAtPosition(int data,int position,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }

    int len=findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }

    //step1:find position
    int i=1;
    Node* prev=head;
    while(i<position){
        
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    //step2:create a node
    Node* newNode=new Node(data);
    //step3:
    newNode->next=curr;
    //step4:
    prev->next=newNode;

}

void deleteNode(int position,Node* &head,Node* &tail){
    if(position==0){
        cout<<"cannot delete,LL is empty "<<endl;
        return ;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    int len=findLength(head);
    if(position==len){
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        
        prev->next=NULL;

        Node* temp=tail;

        tail=prev;

        delete temp;
        return;
    }


    //deleting from middle
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
     }

     Node* curr=prev->next;

     prev->next=curr->next;

     curr->next=NULL;

     delete curr;
}



int main(){

    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,60);
    insertAtTail(head,tail,90);

    print(head);
    cout<<endl;

    deleteNode(5,head,tail);
    cout<<endl;
    print(head);



    // cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    // insertAtPosition(101,6,head,tail);
    // cout<<endl;
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;


    



    // Node *first=new Node(10);
    // Node *second=new Node(20);
    // Node *third=new Node(30);
    // Node *fourth=new Node(40);
    // Node *fifth=new Node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // cout<<"Printing the LL "<<endl;

    // print(first);

    

    
        return 0;
}