#include<bits/stdc++.h>

using namespace std;




class Graph{
    public:

    unordered_map<int,list<int>>adjList;

    void addEdge(int u,int v,bool direction){
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto node:adjList){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int src){
        queue<int>q;

        unordered_map<int,bool>visited;

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


    void dfs(int src){
        cout<<src<<" ";

        unordered_map<int,bool>visited;
        visited[src]=true;

        for(auto neighbour:adjList[src]){
            if(!visited[neighbour]){
                bfs(neighbour);
            }
        }
    }

    void topoSortDfs(int src,unordered_map<int,bool>&visited,stack<int>&ans){
        visited[src]=true;

        for(auto nbr:adjList[src]){
            if(!visited[nbr]){
                topoSortDfs(nbr,visited,ans);
            }
            
        }
        ans.push(src);
    }


    void topoSortBfs(int n,vector<int>&ans){
        
        queue<int>q;
        unordered_map<int,int>indegree;
        for(auto i:adjList){
            int src=i.first;
            for(auto nbr:adjList[src]){
                indegree[nbr]++;
            }
        }

        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int fNode=q.front();
            q.pop();

            ans.push_back(fNode);

            for(auto nbr:adjList[fNode]){
                indegree[nbr]--;

                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
    }

    
};


int main(){

    Graph g;

    // stack<int>ans;
    // unordered_map<int,bool>visited;


    int n=8;
    vector<int>ans;

    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    g.addEdge(3,5,1);
    g.addEdge(4,6,1);
    g.addEdge(6,7,1);
    g.addEdge(5,6,1);

    // g.topoSortDfs(0,visited,ans);

    

    g.printAdj();

    g.topoSortBfs(n,ans);
    for(auto i:ans){
        cout<<i<<" "; 
    }

    // while(!ans.empty()){
    //     cout<<ans.top()<<" ";
    //     ans.pop();
    // }



    return 0;
}