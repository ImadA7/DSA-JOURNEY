
//numb is odd or even

#include<iostream>
using namespace std;

int oddoreven(int num){
    if(num%2==0){
        cout<<"number is even";
    } else {
        cout<<" number is odd \n";
    }
}
int main(){
    oddoreven(6);
    oddoreven(7);
}

