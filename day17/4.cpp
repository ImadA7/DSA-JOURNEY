#include<iostream> 
using namespace std;

class car{
    string name;
    string color;

public:
    car(string name, string color) {
        cout<<"constructor has been called. oject being created \n";
        this->name=name;//object ko refer krre h
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
    car c1("maeuti 800","white");
    cout<< c1.getname()<<endl;
    return 0;
}