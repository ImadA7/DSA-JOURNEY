//copy constructor=(its default) used to copy prop of one object into another
#include<iostream>
using namespace std;

class car{
    public:
        string name;
        string color;
    car(string name, string color) {
        this->name=name;
        this->color=color;
        cout<<"hello"<<endl;
    }
    //custom copy cpndtructor
    car(car &original){
        cout<<"copying original to new";
        name=original.name;
        color=original.color;
    }
   
};
int main() {
    car c1("maruti 800", "white");
    car c2(c1);
    cout<< c2.name<<endl;
    cout<<c2.color<<endl;


    return 0;
}