// Using the Adjecency List

// In this approach we represent graph as an array of 
// linked list

// Lets implement grpah



#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<list>
using namespace std;


// birectional Graph

vector<list<int> >graph;  // graph of link list

int v; // vertex

void add_edge(int src,int des,bool bidirected=true){
    graph[src].push_back(des);
    if(bidirected){
        graph[des].push_back(src);
    }
}

void display(){
        // using loops to print it
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto it: graph[i]){
            cout<<it<<", ";
        }
        cout<<endl;
    }
}
int main(){
    // take input of number of vertices
    cin>>v;
    graph.resize(v,list<int> ());

    // take input of number of edges
    int edge;
    cin>>edge;
    while(edge--){
        int src,dest;
        cin>>src>>dest;
        // biderectional
        // add_edge(src,dest);
        // directed graph
        add_edge(src,dest,false);

    }

    display();
    
}