#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> prevSmallerEle(vector<int>&input){
    stack<int>s;
    s.push(-1);

    vector<int>ans(input.size());

    for(int i=0;i<input.size();i++){
        int curr=input[i];

        while( s.top()!=-1  && input[s.top()]>=curr){
            s.pop();
        }

        ans[i]=s.top();

        s.push(i);
    }

    return ans;
}


vector<int> nextSmallerEle(vector<int>&input){
    stack<int>s;
    s.push(-1);

    vector<int>ans(input.size());

    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];

        while( s.top()!=-1  && input[s.top()]>=curr){
            s.pop();
        }

        ans[i]=s.top();

        s.push(i);
    }

    return ans;
}

int getMaxiRectangularArea(vector<int>&height){
    //previous smaller
    vector<int>prev=prevSmallerEle(height);

    //next smaller
    vector<int>next=nextSmallerEle(height);

    int maxArea=INT_MIN;

    int size=height.size();

    for(int i=0;i<height.size();i++){
        if(next[i]==-1){
            next[i]=size;
        }
        int length=height[i];
        int width=next[i]-prev[i]-1;

        int area=length*width;
        maxArea=max(area,maxArea);
    }

    return maxArea;
}


int main(){


    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    int ans=getMaxiRectangularArea(v);
    cout<<"maxi area is: "<<ans<<endl;






    // vector<int>v;
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(4);
    // v.push_back(3);


    // vector<int>ans2=prevSmallerEle(v);

    // for(int i=0;i<ans2.size();i++){
    //     cout<<ans2[i]<<" ";
    // }
    // cout<<endl;





//NEXT SMALLER ELEMENT


    // vector<int>v;
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(4);
    // v.push_back(3);

    // stack<int>s;
    // s.push(-1);

    // vector<int>ans(v.size());

    // for(int i=v.size()-1;i>=0;i--){
    //     int curr=v[i];
    //     while(s.top()>=curr){
    //         s.pop();
    //     }
    //     ans[i]=s.top();
    //     s.push(curr);
    // }


    // cout<<"Printing "<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    
    
     return 0;
}