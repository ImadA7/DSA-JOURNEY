//binary strings problem
#include<iostream>
using namespace std;

void binarystring(int n, int lastplce, string ans) {
    if(n==0) {
        cout<<ans<<endl;
        return;
    }
    if(lastplce!=1) {
        binarystring(n-1,0,ans+'0');
        binarystring(n-1,1,ans+'1');
    } else {
        binarystring(n-1,0,ans+'0');
    }
}

int main() {
    string ans=" ";
    binarystring(3,0,ans);
  
    
}