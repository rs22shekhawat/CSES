#include<bits/stdc++.h>

using namespace std;

class Graph{
    public:

    unordered_map<int,list<pair<int,int>>>adjList;



    void addEdge(int u,int v,int wt,bool direction){
        adjList[u].push_back({v,wt});
        if(direction==0){
            adjList[v].push_back({u,wt});
        }
            }

    void printAdj(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto nbr:i.second){
                cout<<"("<<nbr.first<<","<<nbr.second<<")"<<" ";
            }
            cout<<endl;
        }
    } 

   void shortestPathBFS(int src,int des){
        unordered_map<int,bool>visited;
        unordered_map<int,int>parent;
        queue<int>q;

        q.push(src);
        visited[src]=true;
        parent[src]=-1;

        while(!q.empty()){
            int fNode=q.front();
            q.pop();

            for(auto nbr:adjList[fNode]){
                if(!visited[nbr.first]){
                    q.push(nbr.first);
                    visited[nbr.first]=true;
                    parent[nbr.first]=fNode;
                }
                            }
        }

        int node=des;
        vector<int>ans;
        while(node!=-1){
            ans.push_back(node);
            node=parent[node];
        }
        reverse(ans.begin(),ans.end());

        for(auto i:ans){
            cout<<i<<" ";
        }
    }       


};

int main(){

    Graph g;
    
    g.addEdge(0,1,1,1);
    g.addEdge(1,2,1,1);
    g.addEdge(2,3,1,1);
    g.addEdge(3,4,1,1);
    g.addEdge(0,5,1,1);
    g.addEdge(5,4,1,1);
    g.addEdge(0,6,1,1);
    g.addEdge(6,7,1,1);
    g.addEdge(7,8,1,1);
    g.addEdge(8,4,1,1);

    g.printAdj();

    int src=0;
    int des=4;

    g.shortestPathBFS(src,des);








    return 0;
}