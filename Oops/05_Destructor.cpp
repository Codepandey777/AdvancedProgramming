// Destructor is used to deallocate the memory created by constructor

//it only deallocates memory which is static


// for dynamically allocated memories we manually need to deallocate them 

// we use delete keyword

// if we are deleting the ptr it doesnt mean that pointer got deleted but the pointer is pointing to the particular memory allocation got deleted.


 // Deep Copy vs shallow copy


//shalow copy-- copies all the memeber values from one object to another with its refrence.

// deep copy-- Not only copies the member values but also makes the copies of any dynamcally allocated memory thatmemebrs point to.



// when you allocate memory staically like 

// int x=5;  (memory allocated at compile time)(stack)
// int x= new int(5) (memory allocated at run time)(heap)

// sahllow copy gives problem when memory is dynamically alocated



// if ther eis DMA then we prefer Deep Copy

// in deep copy you need to design your constructor Yourself

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;


    Student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double();
        *cgpaptr=cgpa; // using DMA
    }

    // Lets make a custom DMA copy constructor
    Student(Student &obj){
        this->name=obj.name;
        cgpaptr=new double();
        *cgpaptr=*(obj.cgpaptr);
    }

    // lets make a Destructor symbol tilde

    ~Student(){
         cout<<"hi i delete Everything";
         delete cgpaptr; // if not done then meory leak
    }
    void getinfo(){
        cout<<"name:- "<<name<<endl;
        cout<<"cgpa:- "<<*cgpaptr<<endl;
        }
};
int main(){
     Student s1("shubham",8.9);
    Student s2(s1);
    s1.getinfo();
    s2.name="anup";
    *(s2.cgpaptr)=9.9;
    s1.getinfo(); // wont change
    s2.getinfo();



}