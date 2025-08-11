//destructor copy
#include<iostream>
using namespace std;

class car{
    public:
        string name;
        string color;
        int *mileage;
    car(string name, string color) {
        this->name=name;
        this->color=color;
        mileage = new int;
        *mileage=12;
    }

    car(car &original){
        cout<<"copying original to new";
        name=original.name;
        color=original.color;
        mileage=new int;//dynamic allocation
        *mileage=*original.mileage;
    }
    ~car() {
        cout<<"deleting object..\n";
        if(mileage != NULL) {
            delete mileage;
            mileage=NULL;
        }
    }
   
};
int main() {
    car c1("maruti 800", "white");
    
    cout<< c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    


    return 0;
}