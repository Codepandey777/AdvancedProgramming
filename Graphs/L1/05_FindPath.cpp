// Lets check wether any path exist between two vertices or not ?
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<list<int> >graph;  // graph of link list
unordered_set<int>visited;
int v; // vertex

vector<vector<int> >ans;

void add_edge(int src,int des,bool bidirected=true){
    graph[src].push_back(des);
    if(bidirected){
        graph[des].push_back(src);
    }
}


void dfs(int curr,int end,vector<int>&path){

    // base case
    if(curr==end) {
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // marking visited set
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
        if(visited.find(neighbour)==visited.end()){ // if neigbour is not visited
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;

}


void find_Path(int src,int dest){
    vector<int>v;
   dfs(src,dest,v);
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
    find_Path(0,6);

    for(auto row:ans){
        for(auto col: row){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    
}