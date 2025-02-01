#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    string age;

    Person(){
        cout<<"This is parent Constructer";
    }
    ~Person(){
        cout<<"This is parent Destructer";
    }

};


class Student: public Person{
public:
    int rollno;
    Student(){
        cout<<"This is child constructer"<<endl;
    }
    void display(){
        cout<<"Name:- "<<name<<endl;
        cout<<"Age:- "<<age<<endl;
        cout<<"Roll:- "<<rollno<<endl;
    }
    ~Student(){
        cout<<"This is child destructer"<<endl;
    }
};
int main(){
    // Inheritence

     // when the properties of base class/;parent class is tranfered to the child class/derieved class this property is called as inheritence

     // used for the code reusablity


     // whenever we make any object of derieved class

     // firstly base class constructor is called
     // then derieved class constructor is called
     // and vice versa in the destructor when object memory gets deallocated or goes out of the scope

     // destructor of derieved
     // destructor of parent



    // If we are having parameterised constructer then we have to manually need to call the parent one using :
     Student s1;
     s1.name="shubham";
     s1.age="34";
     s1.rollno=7;


     s1.display();
    


    //Types of inheritence

    /*
    1. single level
    2.multilevel
    3.multiple inheritence
    4.hirearchial inheritence :-  from one parent class multiple child classes are inheriting things
    5. Hybrid inheitence:- Anything can happen all mix
    */
    




     
}