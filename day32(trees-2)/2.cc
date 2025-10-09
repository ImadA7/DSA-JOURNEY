#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){

    map<int, string> m;
    m[101]="imad";
    m[110]="fin";
    m[131]="imad";
    cout<<m[101];
    cout<<m.count[101];
    cout<<m.count[191];

    for(auto it : m){
        cout<<"key ="<< it.first<<","<<"value = "<<it.second<<endl;
    }
    return 0; 
} 