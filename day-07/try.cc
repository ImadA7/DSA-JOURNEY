#include<iostream>
using namespace std;

int factorial(int num){
    if(num==0||num==1){
        return 1;
    } else {
        return num * factorial(num-1); 
    }
    
}

int bincoeff(int num, int r ){
    int answer = factorial(num)/(factorial(r)*factorial(num-r));
}

int main(){
    cout<<bincoeff(10,3);
    return 0; 
}