#include<iostream> //constructors are usd for initiisation
using namespace std;

class car{
    string name;
    string color;

public:
    car(string namevalue, string colorvalue) { //ye hamne constructor bnaya hein, constructor name is same as class name
        cout<<"constructor has been called. oject being created \n";
        name=namevalue;
        color=colorvalue;
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

/*
🔧 What is a Constructor?
A constructor is a special function in a class that is automatically called when an object of the class is created.

It is used to:

✅ Initialize object properties

🔁 Replace manual setter calls

🧼 Ensure every object starts with valid data


🧱 Basic Rules of Constructors
Rule	Description
🟢 Same name as class	The constructor must have the same name as the class
🔁 No return type	Not even void
🚀 Called automatically	When you create an object, constructor runs
♻️ Can be overloaded	You can have multiple constructors with different parameters*/