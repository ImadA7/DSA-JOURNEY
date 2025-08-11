#include<iostream> //bitwise man
using namespace std;

void oddoreven(int num) {
    if((num&1)==0) {
        cout<<"even"<<endl;
    } else {
        cout<<"odd"<<endl;
    }
}

int main() {
    oddoreven(5);
    oddoreven(6);
    

    return 0;
}