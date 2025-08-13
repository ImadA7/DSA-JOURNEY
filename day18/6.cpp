//static variables(in class)
#include<iostream>
using namespace std;

class example{
public:
    static int x;
};
int example::x=0; //inittialisation

int main()  {
    example eg1;
    example eg2;
    example eg3; 
    cout<<eg1.x++<<endl;  
    cout<<eg2.x++<<endl;  
    cout<<eg3.x++<<endl;  
    
    


    return 0;
}