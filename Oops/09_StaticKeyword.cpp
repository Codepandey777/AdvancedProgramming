/*
Static Keyword is used for both the variables as well as object

>variables declared in staic is created and initialised once in the lifetime of a programme

>They are created in class once and then shared by all the other classes



// Whatever objects you will be creating with static its execution will end after the main function ends    
*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(){
    // int x=0;
    static int x=0;
    cout<<x<<endl;
    x++;
}
int main(){
    func();
    func();
    func();
}