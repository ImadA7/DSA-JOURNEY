#include<iostream> // unirdered sets            
#include<unordered_map>
#include<map>
#include<unordered_set>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    
    if(s.find(3)!=s.end()){
        cout<<"exists"<<endl;
    }else {
        cout<<"not exists"<<endl;
    }

    s.erase(3);
    if(s.find(3)!=s.end()){
        cout<<"exists"<<endl;
    }else {
        cout<<"not exists"<<endl;
    }

    for(auto el : s){
        cout<<el<<" ";
    }
    cout<<endl;


    return 0;
}