//run time polymorphism
//i) function overridng 
#include<iostream>
using namespace std;

class parent {
public:
    void show(){
        cout<<"parent class show";
    }
};
class child : public parent {
public:
    void show() {
        cout<<"child class show \n";
    }
};


int main() {
    child child1;
    child1.show();
    return 0;
}