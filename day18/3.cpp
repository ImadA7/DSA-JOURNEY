//run time polymorphism
//i) virtual overridng 
#include<iostream>
using namespace std;

//virtual function ke liye compulsory hota hein ki derived clss mein redefined honge

class parent {
public:
    void show(){
        cout<<"parent class show";
    }
    virtual void hello() {
        cout<<"parent hello";
    }
};
class child : public parent {
public:
    void show() {
        cout<<"child class show \n";
    }
    void hello() {
        cout<<"child hello";
    }
};


int main() {
    child child1;
    parent *ptr; // ye ptr parent class ke obj ko point krega
    ptr =  &child1;//run time binding
    ptr->hello();//virtual unction
    return 0;
}