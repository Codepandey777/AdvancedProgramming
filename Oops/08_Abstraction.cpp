// Data Abstraction


// Hiding all the unnecesaary details and showing only the important stuffs.


// it hides as well as also shows the important details need to be shown


//Access modifiers- public private and protected
// There is one more way to implement the abstraction

/*
Using the Abstract clasees

// abstract means =- khayal Thought

// The abstract clasees never create any object but they become blueprint for the other claases

// They are used to provide the base class from which other classes may be derievd

// Typically derived for an interface   for derieved classes

// They are also made using pure virtual functions



*/





#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Shape{
public:
    virtual void draw()=0; // pure virtual function
};

class Rectangle:public Shape{
    void draw(){
        cout<<"Drawing a rectangle";
    }
}
int main(){

    Rectangle r1;
    r1.draw();


    
}