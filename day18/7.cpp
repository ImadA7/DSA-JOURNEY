//static objects
#include<iostream>
using namespace std;

class example {
public:
    example() {
        cout<<"constructor\n";
    }
    ~example() {
        cout<<"destructor\n";
    }


};

int main()  {
    int a=0;
    if(a==0) {
        static example eg1;
    }
    cout<<"code ending \n";
    

    return 0;
}