// Encapsulation is the process of wrapping of data and member functions in a single unit

// example is like previous we implemented teacher calss


/*
For example for a bank service

name , id,  can be public but balance, password are private members


*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Car {
private:
    int speed; // private data

public:
    // Setter method
    void setSpeed(int s) {
        speed = s;
    }

    // Getter method
    int getSpeed() {
        return speed;
    }
};

int main(){
    
}