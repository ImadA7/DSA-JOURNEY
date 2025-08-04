//✅ Pass by Reference (original variable is modified):
#include<iostream>
using namespace std;

void passByReference(int &x) {
    x = x + 5;
    cout << "Inside passByReference: x = " << x << endl;
}

int main() {
    int a = 10;
    passByReference(a);
    cout << "After passByReference: a = " << a << endl;
    return 0;
}
