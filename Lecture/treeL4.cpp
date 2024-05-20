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


int findPosition(int inOrder[],int size,int element){
   
   for(int i=0;i<size;i++){
    if(inOrder[i]==element){
          return i;
    }
   }
   return -1;
}


Node* buildTreeFromInorderPreorder(int preOrder[],int inOrder[],int size,int& preIndex,int inorderStart,int inorderEnd){

    if(preIndex>=size || inorderStart>inorderEnd){
        return NULL;
    }

    int element=preOrder[preIndex++];
    Node* root=new Node(element);
    int pos=findPosition(inOrder,size,element);


    root->left=buildTreeFromInorderPreorder(preOrder,inOrder,size,preIndex,inorderStart, pos-1);
    root->right=buildTreeFromInorderPreorder(preOrder,inOrder,size,preIndex, pos+1,inorderEnd);

    return root;
}


void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}

int main(){
    int preOrder[]={5,1,3,4,2};
    int inOrder[]={3,1,4,5,2};

    int size=5;
    int inorderStart=0;
    int inorderEnd=size-1;
    int preIndex=0;
    cout<<"Building Tree "<<endl;
    Node* root=buildTreeFromInorderPreorder(preOrder,inOrder,size,preIndex, inorderStart,inorderEnd);


    cout<<"Printing the Tree "<<endl;
    levelOrderTraversal(root);

    return 0;
}