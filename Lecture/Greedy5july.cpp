#include<bits/stdc++.h>
using namespace std;


// bool cmp(pair<int,int>a,pair<int,int>b){
//     return a.second<b.second;
// }

// int solve(int n,int arr[],int dep[]){
//     int cnt=1;
//     vector<pair<int,int>>data;

//     for(int i=0;i<n;i++){
//         data.push_back({arr[i],dep[i]});
//     }

//     sort(data.begin(),data.end(),cmp);



//     for(int i=1;i<n;i++){
//         if(data[i].first>=data[0].second){
//             cnt++;
//             cout<<data[i].first<<","<<data[i].second<<endl;
//         }
//     }
//     return cnt;
// }

int main(){

    // int n=4;
    // int arr[]={5,8,2,4};
    // int dep[]={7,11,6,5};

    // int ans=solve(n,arr,dep);

    // cout<<"total trains are "<<ans<<endl;





    int x,y,n;
    cin>>x>>y>>n;
    vector<int>rowC;
    vector<int>colC;
    int t=n;

    rowC.push_back(0);
    colC.push_back(0);

    while(t--){
        int a,b;
        cin>>a>>b;
        rowC.push_back(a);
        colC.push_back(b);
    }

    rowC.push_back(x+1);
    colC.push_back(y+1);

    sort(rowC.begin(),rowC.end());
    sort(colC.begin(),colC.end());

    for(auto i:rowC){
        cout<<i<<" "; 
    }
    cout<<endl;

    for(auto i:colC){
        cout<<i<<" "; 
    }
    cout<<endl;

    int maxlen=INT_MIN;

    for(int i=1;i<rowC.size();i++){
        int a=rowC[i-1];
        int b=rowC[i];

        maxlen=max(maxlen,b-a-1);
    }

    int maxwidth=INT_MIN;

    for(int i=1;i<colC.size();i++){
        int a=colC[i-1];
        int b=colC[i];

        maxwidth=max(maxwidth,b-a-1);
    }

    cout<<"ans is "<<maxlen*maxwidth<<endl;





    return 0;
}