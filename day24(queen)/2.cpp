#include<iostream> //find subsets 
using namespace std;
 
void printsubset(string str, string subset){
    if(str.size()==0) {
        cout<<subset<<"\n"; 
        return;
    }
    char ch=str[0];

    printsubset(str.substr(1,str.size()-1), subset+ch); //yes choice
    printsubset(str.substr(1,str.size()-1), subset); //no choice

}

int main() {
    string str="abc";
    string subset=" ";
    printsubset(str,subset);




    return 0;
}