#include<bits/stdc++.h>
using namespace std;


static bool cmp(string first , string second)
	{
	    if(first+second > second+first) //order is right don't do anything
	       return true;
	    else              //order is wrong do swap
	       return false;
	}
int main(){
    vector<string>s;

    // s.push_back("54");
    // s.push_back("548");
    // s.push_back("546");
    
    // s.push_back("60");

    // sort(s.begin(),s.end());

    s.push_back("3");
    s.push_back("30");
    s.push_back("34");
    
    s.push_back("5");
    s.push_back("9");
    s.push_back("90");
    s.push_back("900");
    s.push_back("901");

    s.push_back("910");
    s.push_back("91");


    

    sort(s.begin(),s.end(),cmp);

    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}