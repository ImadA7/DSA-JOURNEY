#include<iostream>
using namespace std;

void binstring(int n, int lp, string ans){
    if(n==0){
        cout<<ans<<<endl;
        return;
    }

    if(lp!=1){
        binstring( n-1,0,ans+'0');
    }
}

int main(){
    string ans= " ";



    return 0;
}