#include <iostream> //address of operator
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;

    cout << a << endl;  // prints 5
    cout << &a << endl; // prints address of a
    cout << p << endl;  // same as &a
    cout << *p << endl; // dereference → prints 5
    return 0;
}
