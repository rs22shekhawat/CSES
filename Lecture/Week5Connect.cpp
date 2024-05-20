#include<iostream>
#include<string.h>
#include<string>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;


// bool cmp(char x,char y){
//     return x>y;
// }


bool compare(int a,int b){
    return a>b;
}

int main(){

// string s="babbar";
// sort(s.begin(),s.end(),cmp);
// cout<<s;


vector<int>v{5,4,2,3,1};
sort(v.begin(),v.end(),compare);
for(auto i:v){
    cout<<i<<" ";
}


return 0;
}