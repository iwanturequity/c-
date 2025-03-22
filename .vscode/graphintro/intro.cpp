#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
     unordered_map<int, list<int > > adj;

     void addEdge(int u, int v, bool direction){
        // direction 0- undirected edge
        // direction 1- directed edge

        // now create the edge
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u); // if undirected, add the reverse edge as well
        }
     }

     // print the graph
     void print(){
        for(auto i: adj){
            cout<< i.first << " -> ";
            for(auto j: i.second){
                cout<< j << " , "; 
            }
        }
     }
};

int main(){
    
    return 0;
}