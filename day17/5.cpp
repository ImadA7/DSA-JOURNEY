#include<iostream>  //types of constructor
using namespace std;

class car{
    string name;
    string color;

public:
    car() {
        cout<<"constructor without parameter";
    }
    car(string name, string color) {
        cout<<"constructor with parameter\n";
        this->name=name;
        this->color=color;
    }
    void start() {
        cout<<"car has started\n";
    }

    void stop() {
        cout<<"car has stopped\n";
    }
    //getter
    string getname()  {
        return name;
    }
};

int main() { 
    car c0;
    car c1("maeuti 800","white");
    car c2("bmw","white");
    
    return 0;
}