#include<iostream>//remove duplicates in a string
using namespace std;

void remdup(string str, string ans, int i, int map[26]) {
    if(i==str.size()) {
        cout<<"ans : "<<ans<<endl; 
        return;
    }
     
    int mapidx=(int)(str[i]-'a');

    if(map[mapidx]== true) { //duplicate
        remdup(str, ans, i+1, map);
    } else { //not duplicate
        map[mapidx]=true;
        remdup(str, ans+str[i], i+1,map);
    }
}
int main() {
    string str = "appnnacollege";
    string ans="";
    int map[26]={false};
    remdup(str, ans, 0 , map);
    return 0;  
} 