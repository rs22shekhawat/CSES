#include<bits/stdc++.h>

using namespace std;


class Node{
        public:
           int data;
           Node* left;
           Node* right;

           Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
           }
           
};


void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    q.push(NULL);
    
    while(!q.empty()){
        Node* temp=q.front();

        q.pop();

       if(temp==NULL) {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
                    }
        else{
            cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }    
        if(temp->right){
            q.push(temp->right);
        }

        }
            }
    }


Node* insertIntoBST(Node* root,int data){

    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(root->data>data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;

}


void takeInput(Node*& root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

Node* findInBST(Node* root,int target){

    if(root==NULL){
        return NULL;
    }

    if(root->data==target){
        return root;
    }

    if(root->data>target){
        return  findInBST(root->left,target);
    }
    else{
       return  findInBST(root->right,target);
    }
}


int minVal(Node* root){
    if(root==NULL){
        return -1;
    }

    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int maxVal(Node* root){
    if(root==NULL){
        return -1;
    }

    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}


Node* deleteInBST(Node* root,int target){
    if(root==NULL){
        return NULL;
    }

    

    if(root->data==target){

        if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL; 
    }
    else if(root->left!=NULL && root->right==NULL){
        Node* child=root->left;
        delete root;
        return child;

    }
    else if(root->left==NULL && root->right!=NULL){
        Node* child=root->right;
        delete root;
        return child;
    }
    else{
       int inorder=maxVal(root->left);
       root->data=inorder;
       root->left=deleteInBST(root->left,inorder);
       return root;

    }
    }

    if(root->data>target){
        root->left=deleteInBST(root->left,target);
    }
    else if(root->data<target){
        root->right=deleteInBST(root->right,target);
    }

}


int main(){

    Node* root=NULL;
    cout<<"Enter data for printing"<<endl;

    takeInput(root);

    cout<<"printing BST"<<endl;
    levelOrderTraversal(root);

    // bool ans=findInBST(root,15);
    // cout<<"present or not is :"<<ans<<endl;

    // int ans1=minVal(root);
    // cout<<"minimum value is "<<ans1<<endl;

    //  int ans2=maxVal(root);
    // cout<<"maximum value is "<<ans2<<endl;

    cout<<"Deleting node "<<endl;
    Node* ans =deleteInBST(root,100);
    levelOrderTraversal(root);





    return 0;


}