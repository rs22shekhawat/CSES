#include<bits/stdc++.h>

using namespace std;

template<typename T>

class Graph{
    public:

    // unordered_map<int,list<pair<int,int>>>adjList;

    unordered_map<T,list<T>>adjList;

    void addEdge(T u,T v,bool direction){
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto node:adjList){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }


    void bfs(int src,unordered_map<int,bool>&visited){
        queue<int>q;

        // unordered_map<int,bool>visited;

        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            int frontNode=q.front();
            q.pop();
            cout<<frontNode<<" ";

            for(auto neighbour:adjList[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
    }


    void dfs(int src,unordered_map<int,bool>&visited2){
        cout<<src<<" ";

        // unordered_map<int,bool>visited;
        visited2[src]=true;

        for(auto neighbour:adjList[src]){
            if(!visited2[neighbour]){
                dfs(neighbour,visited2);
            }
        }


    }

    
};

int main(){

    //  Graph g;

    // Graph<char>g;
    // g.addEdge('a','b',0);
    // g.addEdge('b','c',0);
    // g.addEdge('a','c',0);
    // g.printAdj();

    //  g.addEdge(0,1,1);
    //  g.addEdge(1,2,1);
    //  g.addEdge(0,2,1);
    Graph<int>g;
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(1,3,0);
    // g.addEdge(3,5,0);
    // g.addEdge(3,7,0);
    // g.addEdge(7,6,0);
    // g.addEdge(7,4,0);

      g.addEdge(0,1,0);
      g.addEdge(1,3,0);
      g.addEdge(0,2,0);
      g.addEdge(2,4,0);
    g.printAdj();
    cout<<endl;
    // g.bfs(0);

// IF GRAPH IS DISCONNECTED
    unordered_map<int,bool>visited;
    for(int i=0;i<=4;i++){
        if(!visited[i]){
            g.bfs(i,visited);
        }
    }
    cout<<endl;
    cout<<"DFS Traverse"<<endl;


    unordered_map<int,bool>visited2;
    for(int i=0;i<=4;i++){
        if(!visited2[i]){
            g.dfs(i,visited2);
        }
    }


//BY ADJACENCY MATRIX

    // int n;
    // cout<<"Enter number of nodes "<<endl;
    // cin>>n;

    // int e;
    // cout<<"Enter edges "<<endl;
    // cin>>e;

    // vector<vector<int>>adj(n,vector<int>(n,0));

    // for(int i=0;i<e;i++){
    //     int u,v;

    //     cin>>u>>v;

    //     adj[u][v]=1;

    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;


}