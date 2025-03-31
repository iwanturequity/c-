#include<iostream>
#include<unordered_map>
#include<list>
// we can also include here typename of graph like whichntype of graph i want to print 
template <typename T> 
using namespace std;

class graph{
    public:
     unordered_map<T, list<T > > adj;

     void addEdge(T u, T v, bool direction){
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
            cout<<endl;
        }
     }
};


int main(){
    int n ;
    cout<<"Enter the number of Nodes: ";
    cin>>n;

    int m;
    cout<<"Enter the number of Edges: ";
    cin>>m;

    graph<int> g;

    for(int i= 0; i<m; i++){
        int u,v;
        cin>> u>>v;
        g.addEdge(u,v,0); // 0 for undirected graph
    }

    g.print();

    return 0;
}