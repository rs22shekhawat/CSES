#include <iostream>
#include<queue>
using namespace std;
#include<bits/stdc++.h>

class Node{
	public:
	int data;
	Node* left;
	Node* right;

    	Node(int data) {

		this->data = data;
		left = NULL;
		right = NULL;
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

void inorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//LNR
	inorderTraversal(root->left);
	cout << root -> data << " ";
	inorderTraversal(root->right);
}

vector<int> inOrder(Node* root){
	stack<Node*>s;
	vector<int>ans;

	while(true){

		if(root!=NULL){
			s.push(root);
			root=root->left;
		}
		else{
			if(s.empty())break;
			root=s.top();
			ans.push_back(root->data);
			s.pop();
			root=root->right;
		}
				}
		return ans;		
}

void preorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//NLR
	cout << root -> data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

vector<int> preOrder(Node* root){
	stack<Node*>s;
	vector<int>ans;

	s.push(root);

	while(!s.empty()){
		Node* temp=s.top();
		ans.push_back(temp->data);
		s.pop();


		if(temp->right){
			s.push(temp->right);
		}

        if(temp->left){
			s.push(temp->left);
		}
	}
		return ans;		
}



void postorderTraversal(Node* root) {
	if(root == NULL)
		return;

	//LRN
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root -> data << " ";
}

vector<int> postOrder(Node* root){
	stack<Node*>s1,s2;
	vector<int>ans;

	s1.push(root);
	while(!s1.empty()){
		Node* temp=s1.top();
		s1.pop();
		s2.push(temp);
		

		if(temp->left)
		  s1.push(temp->left);

		if(temp->right)
		   s1.push(temp->right);  

	}

	while(!s2.empty()){
        ans.push_back(s2.top()->data);
		s2.pop();
	}
	return ans;

}

int height(Node* root) {
	if(root == NULL) 
		return 0;

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	int ans = max(leftHeight, rightHeight) + 1;
	return ans;
}
 
int main() {
	Node* root = NULL;

	root = buildTree();
	// levelOrderTraversal(root);
	// cout << "height: "<< height(root) << endl;
	
	vector<int>ans1=inOrder(root);
	// vector<int>ans1=preOrder(root);
	// vector<int>ans1=postOrder(root);
	for(auto i:ans1){
		cout<<i<<" ";
	}




	return 0;
}



int a=3;
int b=2;
           
		    
			++++-