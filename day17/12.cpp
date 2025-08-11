//INHERITANCE=code reusability (protected)
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

class fish : protected animal{
public:
    int fins;

    void swim() {
        eat();
        cout<<"swims\n";
    }
};
int main() {
    fish f1;
    f1.fins=3;
    cout<< f1.fins<<endl;
    f1.swim();
    //not possible with protected
    //protected ko "main" ke andr call nhi kr skte but class ke andr kr skte hein like in line 21
    
    return 0;
}