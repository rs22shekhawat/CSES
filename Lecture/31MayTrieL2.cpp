#include<bits/stdc++.h>

using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;


    TrieNode(char d){
        this->data=d;
        this->isTerminal=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }

};

void insertWord(TrieNode* root,string word){

    cout<<"inserting "<<word<<endl;

    if(word.length()==0){
        root->isTerminal=true;
        return ;
    }

    char ch=word[0];
    int index=ch-'A';
    TrieNode* child;

    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        child=new TrieNode(ch);
        root->children[index]=child;
    }

    insertWord(child,word.substr(1));

}

int main(){

    TrieNode* root=new TrieNode('-');
    
    insertWord(root,"CODING");



    return 0;
}