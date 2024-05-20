#include<bits/stdc++.h>

using namespace std;




class Graph{
    public:

    // unordered_map<int,list<pair<int,int>>>adjList;

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

    bool cyclicUsingBFS(int src,unordered_map<int,bool>&visited){
        queue<int>q;
        unordered_map<int,int>parent;

        q.push(src);
        parent[src]=-1;
        visited[src]=true;

        while(!q.empty()){
            int frontNode=q.front();
            q.pop();

            for(auto nbr:adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=frontNode;
                }

                else{
                    if(nbr!=parent[frontNode]){
                        return true;
                    }
                }
            }
            return false;
        }
    }


    bool cyclicUsingDFS(int src,unordered_map<int,bool>&visited,int parent){
        visited[src]=true;

        for(auto nbr:adjList[src]){
            if(!visited[nbr]){
                bool aageKaAns=cyclicUsingDFS(nbr,visited,src);
                if(aageKaAns==true)
                  return true;

            }
            
            if( visited[nbr] && nbr!=parent){
                return true;
            }
            
        }
        return false;
    }


   bool cyclicDirectedDFS(int src,unordered_map<int,bool>&visited,unordered_map<int,bool>dfsVisited){

    visited[src]=true;
    dfsVisited[src]=true;

    for(auto nbr:adjList[src]){
        if(!visited[nbr]){
            bool aageKaAns=cyclicDirectedDFS(nbr,visited,dfsVisited);
            if(aageKaAns==true)return true;
        }
        if(visited[nbr]==true && dfsVisited[nbr]==true){
            return true;
        }
    }
    dfsVisited[src]=false;
    return false;

   }
    
};

int main(){

     Graph g;

    // unordered_map<int,bool>visited;
    




    // g.addEdge(0,1,0);
   
    // g.addEdge(2,3,0);
    // g.addEdge(1,2,0);
    // g.addEdge(3,4,0);
    // g.addEdge(4,0,0);


    g.addEdge(0,1,1);
    g.addEdge(2,3,1);
    g.addEdge(1,2,1);
    g.addEdge(3,4,1);
    g.addEdge(4,0,1);
    unordered_map<int,bool>visited;
    unordered_map<int,bool>dfsVisited;
    bool ans=g.cyclicDirectedDFS(0,visited,dfsVisited);
    if(ans==true)
      cout<<"cycle present"<<endl;
    else
      cout<<"cycle absent"<<endl;
    


    

    
    
    

    g.printAdj();

    cout<<endl;
    // bool ans=g.cyclicUsingBFS(0,visited);
    // if(ans==true)
    //   cout<<"cycle present"<<endl;
    // else
    //   cout<<"cycle absent"<<endl;


    // bool ans=g.cyclicUsingDFS(0,visited,-1);
    // if(ans==true)
    //   cout<<"cycle present"<<endl;
    // else
    //   cout<<"cycle absent"<<endl;
    





    return 0;


}