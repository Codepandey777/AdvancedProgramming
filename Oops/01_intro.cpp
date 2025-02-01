#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Intro

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

    // methods
    void changeDepart(string d)
    {
        dept = d;
    }

    double getSalary()
    {
        return salary;
    }

    void setSalary(double s)
    {
        salary = s;
    }
};

int main()
{
    Teacher t1;
    t1.name="shubham";
    t1.age=23;
    t1.dept="cs";
    // t1.salary=2000;  // will give error sala is private

    cout<<t1.name<<" ";
    t1.setSalary(10000);
    cout<<t1.getSalary()<<" ";
}