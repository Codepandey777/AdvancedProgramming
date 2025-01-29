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

void bfs(int src,vector<int>&dist){
    queue<int>qu;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(! qu.empty()){
        int curr=qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neighbour: graph[curr]){

            if(! visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }

        }

    }
    cout<<endl;

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
    vector<int>dist;
    bfs(0,dist);

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
 

    
}