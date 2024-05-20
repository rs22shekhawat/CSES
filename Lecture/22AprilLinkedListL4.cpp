#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



//CHECK PALINDROME 

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

// bool checkPalindrome(Node* &head){

//     if(head==NULL){
//         return true;
//     }

//     if(head->next==NULL){
//         return true;
//     }

//     Node* slow=head;
//     Node* fast=head;

//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }

//     Node* reverseLLkaHead=reverse(slow->next);

//     slow->next=reverseLLkaHead;

//     Node* temp1=head;
//     Node* temp2=slow->next;
//     while(temp2!=NULL){
//         if(temp1->data !=temp2->data){
//            return false;
//         }
//         else{
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }
//         return true;
//     }
// }

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



//REMOVE DUPLICATES

// void removeDuplicates(Node* &head){
//     if(head==NULL){
//         cout<<"LL is empty "<<endl;
//         return ;
//     }

//     if(head->next==NULL){
//         cout<<"Single element is present only "<<endl;
//         return ;
//     }

//     Node* curr=head;
//     while(curr!=NULL){
//         if((curr->next!=NULL)&& (curr->data==curr->next->data)){
//             Node* temp=curr->next;

//             curr->next=curr->next->next;

//             // temp->next=NULL;
//             delete temp;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
// }





//COUNT 0 1 2

// void sortZeroOneTwo(Node* &head){
//     int zero=0;
//     int one=0;
//     int two=0;
    

//     Node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;
//         }
//         else if(temp->data==1){
//             one++;
//         }
//         else if(temp->data==2){
//             two++;
//         }
//         temp=temp->next;
//     }

   
//        temp=head;
//        while(zero--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(one--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(two--){
//             temp->data=2;
//             temp=temp->next;
//         }
//     }




//SORT 2

// Node* sort2(Node* &head){
//     //create dummy nodes
//     Node* zeroHead=new Node(-1);
//     Node* zeroTail=zeroHead;

//     Node* oneHead=new Node(-1);
//     Node* oneTail=oneHead;

//     Node* twoHead=new Node(-1);
//     Node* twoTail=twoHead;


//     Node* curr=head;

//     while(curr!=NULL){
//         if(curr->data==0){
//             Node* temp=curr;
//             curr=curr->next;
//             temp->next=NULL;

//             zeroTail->next=temp;
//             zeroTail=temp;
//                     }

//         else if(curr->data==1){
//             Node* temp=curr;
//             curr=curr->next;
//             temp->next=NULL;

//             oneTail->next=temp;
//             oneTail=temp;


//         }

//         else if(curr->data==2){
//             Node* temp=curr;
//             curr=curr->next;
//             temp->next=NULL;

//             twoTail->next=temp;
//             twoTail=temp;

//         }
//     }


//     //modify 1 wali list
//     Node* temp=oneHead;
//     oneHead=oneHead->next;
//     temp->next=NULL;
//     delete temp;

//     //modify 2 wali list
//       temp=twoHead;
//     twoHead=twoHead->next;
//     temp->next=NULL;
//     delete temp;

//     //join list
//     if(oneHead!=NULL){
//         zeroTail->next=oneHead;
//         if(twoHead!=NULL){
//             oneTail->next=twoHead;
//         }
//     }
//     else{
//         if(twoHead!=NULL){
//           zeroTail->next=twoHead;
//         }
//         }

//         //remove zeroHead dummy node
//          temp=zeroHead;
//         zeroHead=zeroHead->next;
//         temp->next=NULL;
//         delete temp;

//         return zeroHead;
// }




Node* solve(Node* &head1,Node* &head2){
    //reverse both LL
    head1=reverse(head1);
    head2=reverse(head2);

    //add both

    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;

    while(head1!=NULL && head2!=NULL){
        int sum=head1->data + head2->data + carry;
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);

        if(ansHead==NULL){
            ansHead=newNode;
            ansTail=newNode;
        }
        else {
            ansTail->next=newNode;
            ansTail=newNode;
        }
        head1=head1->next;
        head2=head2->next;
    }

    while(head1!=NULL){
        int sum=head1->data+carry;
        int digit=sum%10;
         carry =sum/10;
        Node* newNode= new Node(digit);

        ansTail->next=newNode;
        ansTail=newNode;
        head1 =head1->next;
    }

     while(head2!=NULL){
        int sum=head2->data+carry;
        int digit=sum%10;
         carry =sum/10;
        Node* newNode= new Node(digit);

        ansTail->next=newNode;
        ansTail=newNode;
        head2=head2->next; 
    }

     while(carry!=0){
        int sum=carry;
        int digit=sum%10;
         carry =sum/10;
        Node* newNode= new Node(digit);

        ansTail->next=newNode;
        ansTail=newNode;
    }


    //reverse ans obtained
    ansHead=reverse(ansHead);
    return ansHead;
}



int main(){

    //ADD TWO LL

    Node* head1=new Node(9);
    Node* second1=new Node(9);
    head1->next=second1;

    Node* head2=new Node(9);
    Node* second2=new Node(9);
    //Node* third2=new Node(4);
    head2->next=second2;
    // second2->next=third2;
    
    
    Node* ans=solve(head1,head2);
    
    print(ans);






    // Node* head=new Node(2);
    // Node* second=new Node(2);
    // Node* third=new Node(2);
    // Node* fourth=new Node(2);
    // Node* fifth=new Node(2);
    // Node* sixth=new Node(2);

    // head->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;




//SORT2

    // print(head);
    // cout<<endl;
    // head=sort2(head);
    // print(head);




//COUNT 0 1 2

    //  cout<<"Input LL is "<<endl;
    //  print(head);
    //  sortZeroOneTwo(head);
    //  print(head);




//REMOVE DUPLICATES

    // cout<<"Input LL is "<<endl;
    // print(head);
    // cout<<endl;

    // removeDuplicates(head);
    // cout<<"Output LL is "<<endl;
    // print(head);




    //CHECK PALINDROME

    // bool isPalindrome=checkPalindrome(head);

    // if(isPalindrome){
    //     cout<<"LL is a Palindrome "<<endl;
    // }
    // else{
    //     cout<<"LL is not a Palindrome "<<endl;
    // }



    return 0;
}