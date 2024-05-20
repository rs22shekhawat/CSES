#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d){
        this->data=d;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};

void insertWord(TrieNode* root,string word){
    cout<<"inserting "<<word<<endl;
    if(word.length()==0){
        root->isTerminal=true;
        return ;
    }

    char ch=word[0];
    int index=ch-'a';
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

bool searching(TrieNode* root ,string word){
    if(word.length()==0){
        
        return root->isTerminal;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->children[index]!=NULL){
       child=root->children[index];
    }
    else{
        return false;
    }
    return searching(child,word.substr(1));

}

int main(){
    TrieNode* root=new TrieNode('-');

    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"coder");
    insertWord(root,"codehelp");
    insertWord(root,"comrade");

    cout<<"Searching "<<endl;
    if(searching(root,"codei")){
        cout<<"found "<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }



    // unordered_map<string,int>mp;
    // pair<string,int>p=make_pair("alto",2);
    // pair<string,int>p2("nano",3);
    // mp["thar"]=5;
    // mp.insert(p);
    // mp.insert(p2);
    // cout<<mp.at("alto")<<endl;
    // cout<<mp["nano"]<<endl;
    // cout<<mp["thar"]<<endl;
    // // cout<<mp.at("scorpio")<<endl;
    // cout<<mp["mahindra"]<<endl;
    // cout<<mp.count("alto")<<endl;

    // if(mp.find("alto")!=mp.end()){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }

    // for(auto i:mp){
    //     cout<<i.first<<" -> "<<i.second<<endl;
    // }

    return 0;


}