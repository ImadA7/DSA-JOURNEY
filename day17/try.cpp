#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    Car(string name, string color){
        this->name=name;
        this->color=color;
    }

    Car(Car &original){
        name=original.name;
    }

};

int main()
{
    Car c1("maserati", " white");
    Car c2(c1);
    cout<<c1.name<<endl;
    cout<<c2.name<<endl;


    return 0;
}