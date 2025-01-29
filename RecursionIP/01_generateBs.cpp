#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findBs(string s,int n){
    // base case
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    //rc
    findBs(s+"0",n);
    if(s[s.size()-1]!= '1'){
    findBs(s+"1",n);
    }
}
int main(){
    int n=3;
    findBs("",n);
}