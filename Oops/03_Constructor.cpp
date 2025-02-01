// contructor is a special method which is automatically invoked at the time of object creation  , it is used for initilization

// whenver you create the class it never occupies anything in your memory but 
// when you create object it spcifies at that time

/*
Some important points regarsding the constructors


1. same name as classs
2. dont have return type
3. only called once automatically , at time of obejct creation.
4. memory allocaton happens when the constructor is called

>> Three Types   :- 

1. parameterised
2. Non Parameterised
3.copy Constructor  (understadn this keyword first)


This Keyword points to the current object 

symbol  this->    or *(this).


this holds the adress of the cureent context or curent function 

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;




class Teacher
{

    // Properties / attributes
private:
    double salary;

public:
string name;
    string dept;
    string subject;
    int age;



    // Declaring Constructor manuaaly
    Teacher(){

        cout<<"Constructor called";
        // suppose i want to do default initialise dept
        dept="computer science";
    }


    //Parameterised constructor
    // Teacher(string n,string d,int a,double s){
    //     name=n;
    //     dept=d;
    //     age=a;
    //     salary=s;

    // }
    

    //using this keyword
    Teacher(string name,string dept,int age,double salary){
        this->name=name;
        this->dept=dept;
        this->age=age;
        this->salary=salary;

    }

    // lets make the manual copy constructer
    Teacher(Teacher &obj){
        this->name=obj.name;
        this->dept=obj.dept;
        this->age=obj.age;
        this->salary=obj.salary;
    }
    

    // methods
    void changeDepart(string d)
    {
        dept = d;
    }

    void display(){
        cout<<"Name:- "<<name<<endl;
        cout<<"Age:- "<<age<<endl;
        cout<<"Salary:- "<<salary<<endl;
    }
   
};
int main(){
    Teacher t1("shubham","cse",23,23000);
    // Default copy constructer created by cpp only

    Teacher t2(t1);  // all elements of t1 copied to t2 as well

    // if we have created manually this becaomes manual copy contructer
    
    t2.display();
}