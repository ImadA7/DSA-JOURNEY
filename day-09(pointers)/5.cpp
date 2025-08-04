#include<iostream>  // Pass by Value (a copy is passed):
using namespace std;

void passByValue(int x) {
    x = x + 5;
    cout << "Inside passByValue: x = " << x << endl;
}

int main() {
    int a = 10;
    passByValue(a);
    cout << "After passByValue: a = " << a << endl;
    return 0;
}
