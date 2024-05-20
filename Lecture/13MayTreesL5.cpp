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


Node* buildTree() {
	int data; 
	cout << "Enter the data: " << endl;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	//Step A , B and C
	Node* root = new Node(data);

	cout << "Enter data for left part of " << data << " node " << endl;
	root->left = buildTree();
	
	cout << "Enter data for right part of " << data << " node " << endl;
	root-> right = buildTree();

	return root;
	
}





// void printTopView(Node* root){

//     if(root==NULL)
//       return;

//     map<int,int>topNode;

//     queue<pair<Node*,int>>q;
//     q.push(make_pair(root,0));

//     while(!q.empty()){
//         pair<Node*,int>temp=q.front();
//         q.pop();

//         Node* frontNode=temp.first;
//         int hd=temp.second;

//         if(topNode.find(hd)==topNode.end()){
//             topNode[hd]=frontNode->data;
//         }

//         if(frontNode->left){
//             q.push(make_pair(frontNode->left,hd-1));
//         }

//         if(frontNode->right){
//             q.push(make_pair(frontNode->right,hd+1));
//         }
//     }  

//     cout<<"Printing the Top View "<<endl;
//     for(auto i: topNode){
//         cout<<i.first<<"->"<<i.second<<endl;
//     }
// }




//  void printBottomView(Node* root){
//     if(root==NULL)
//       return;

//     map<int,int>bottomNode;

//     queue<pair<Node*,int>>q;
//     q.push(make_pair(root,0));

//     while(!q.empty()){
//         pair<Node*,int>temp=q.front();
//         q.pop();

//         Node* frontNode=temp.first;
//         int hd=temp.second;

       
//         bottomNode[hd]=frontNode->data;
        

//         if(frontNode->left){
//             q.push(make_pair(frontNode->left,hd-1));
//         }

//         if(frontNode->right){
//             q.push(make_pair(frontNode->right,hd+1));
//         }
//     }  

//     cout<<"Printing the Bottom View "<<endl;
//     for(auto i: bottomNode){
//         cout<<i.first<<"->"<<i.second<<endl;
//     }
// }



// void printLeftView(Node* root,vector<int>&ans,int level){

//     if(root==NULL)
//        return ;

//     if(ans.size()==level){
//         ans.push_back(root->data);
//     }  

//     printLeftView(root->left,ans,level+1);

//     printLeftView(root->right,ans,level+1);

// }



void printLeftBoundary(Node* root){
    if(root==NULL)
       return ;

    if(root->left==NULL && root->right==NULL){
        return ;
    }   
    
    cout<<root->data<<" ";

    if(root->left){
         printLeftBoundary(root->left);
    }
    else{
         printLeftBoundary(root->right);
    }
}

void printLeafNodes(Node* root){
    if(root==NULL)
      return ;

    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }  

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}


void printRightBoundary(Node* root){
    if(root==NULL)
      return;

    if(root->left==NULL && root->right==NULL){
        return ;
    }  

    if(root->right){
        printRightBoundary(root->right);
    }
    else{
        printRightBoundary(root->left);
    }
    cout<<root->data<<" ";
}


void boundaryTraversal(Node* root){
    if(root==NULL)
      return ;

    cout<<root->data<<" ";

    printLeftBoundary(root->left);

    printLeafNodes(root);

    printRightBoundary(root->right);  
}






int main(){


Node* root=buildTree();

boundaryTraversal(root);




//BOTTOM VIEW

        // Node* root=buildTree();
        // vector<int>ans;
        // int level=0;
        // printLeftView(root,ans,level); 

        // cout<<"Printing Left view "<<endl;
        // for(auto i: ans){
        //     cout<<i<<" ";
        // }




//BOTTOM VIEW

        // Node* root=buildTree();
        // printBottomView(root);




//TOP VIEW

    // Node* root=buildTree();
    // printTopView(root);




    return 0;
}