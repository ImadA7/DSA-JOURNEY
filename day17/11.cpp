//INHERITANCE=code reusability (public)
#include<iostream>
using namespace std;

class animal{
public:
    string color;
    void eat() {
        cout<<"eats\n";
    }
    void breathe() {
        cout<<"breathes\n";
    }
};

class fish : public animal{
public:
    int fins;

    void swim() {
        cout<<"swims\n";
    }
};
int main() {
    fish f1;
    f1.fins=3;
    cout<< f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0;
}