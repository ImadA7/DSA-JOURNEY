#include<iostream> //unordered map
#include<unordered_map>
using namespace std;



int main(){
    unordered_map<string,int> map;
    map["china"]=100;
    map["India"]=465;
    map["Us"]=545;
    map["uk"]=987;
    for(pair<string,int> country : map){
        cout<<country.first<<":"<<country.second<<endl;
    }

    //count=count return krke deta h, key exist krti h ya nhi
    if(map.count("china")){
        cout<<"exists";
    }else{
        cout<<"not exists";
    }
    cout<<endl;
    map.erase("china");
    if(map.count("china")){
        cout<<"exists";
    }else{
        cout<<"not exists";
    }


    return 0;
}