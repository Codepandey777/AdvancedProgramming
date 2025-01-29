// Lets make weighted adjecency list


#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<list>
using namespace std;


// birectional Graph

vector<list<pair<int,int> > >graph;  // graph of link list

int v; // vertex

void add_edge(int src,int des,int wt,bool bidirected=true){
    graph[src].push_back({des,wt});
    if(bidirected){
        graph[des].push_back({src,wt});
    }
}



void display(){

    // using loops to print it
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto it: graph[i]){
            cout<<"("<<it.first<<","<<it.second<<" )"<<"->";
        }
        cout<<endl;
    }
}
int main(){
    // take input of number of vertices
    cin>>v;
    graph.resize(v,list<pair<int,int> >());

    // take input of number of edges
    int edge;
    cin>>edge;
    while(edge--){
        int src,dest,wt;
        cin>>src>>dest>>wt;
        // bidirectional
        add_edge(src,dest,wt);

    }

    display();
    
}