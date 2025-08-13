//Abstraction
#include<iostream>
using namespace std;

//abstract class
//pure vir fn bana ke abtract clas bnti hein
class shape {
public:
    virtual void draw() = 0; //abstract fn, pure vir fxn
};
class circle :  public shape{
public:
    void draw() {
        cout<<"draw circle\n";
    }
};
class square :  public shape{
public:
    void draw() {
        cout<<"draw square\n";
    }
};
int main()  {
    circle cir1;
    cir1.draw();
    square sq1;
    sq1.draw();

    shape s1; //abstract class ka obj nhi bana skte hein
    s1.draw();


    return 0;
}