/*
Polymorphism:-


Poly- multiple
Morphism:- forms

when Our object has the property to behave in diffrent ways depending upon the diffrent types of context is called the polymorphism.

// Depending upon the context our object can decide whom and which to call

//It is of Two Types:-

1. Compile time polymorphism:-  Constructor Overloading,function Overloading  , Operator Overloading


(Name same - parameters diffrent)

in same class you define two types of functions both function must have the same name but should have diffrent parameters

>Either you can diffrent the Type
> You can diffrent the number of parametwrs

>They could have same or diffrent return type
     

2. RunTime Polymorphism:- Dynamic Polymorphism

> 1. Function Overriding
> 2. Virtual functions


//Virtual functions

>They are dynamic in nature
>Dafined with keywords virtual and are alsways declared within base class and overriden in the child class
>it is called during the run time



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function overriding

class Parent{
public:
    void display(){
        cout<<"Parent class display"<<endl;
    }

    virtual void greet(){
        cout<<"Hello from the parent"<<endl;
    }
};

class Child:public Parent{
public:
    void display(){
        cout<<"Child class display"<<endl;
    }

    void greet(){
        cout<<"Hello from the child"<<endl;
    }
};
int main(){
    Child c1;
    Parent p1;
    // c1.display();
    // p1.display();

    c1.greet();
    p1.greet();
    
}