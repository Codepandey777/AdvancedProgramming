// Lets check wether any path exist between two vertices or not ?
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<list<int> >graph;  // graph of link list
unordered_set<int>visited;
int v; // vertex

void add_edge(int src,int des,bool bidirected=true){
    graph[src].push_back(des);
    if(bidirected){
        graph[des].push_back(src);
    }
}


bool dfs(int curr,int end){

    // base case
    if(curr==end) return true;
    visited.insert(curr); // marking visited set
    for(auto neighbour: graph[curr]){
        if(visited.find(neighbour)==visited.end()){ // if neigbour is not visited
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;

}


void check_Path(int src,int dest){
   bool ans= dfs(src,dest);
   cout<<ans<<endl;
}




void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto it: graph[i]){
            cout<<it<<", ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int edge;
    cin>>edge;
    while(edge--){
        int src,dest;
        cin>>src>>dest;
        add_edge(src,dest);

    }

    display();

    check_Path(0,6);

    
}