#include<iostream>  //member functions
#include<string>
using namespace std;
int main() {
    string str = "hello babu, mera babu";
    cout<<str.length()<<endl;
    cout<<str.at(2)<<endl;
    cout<<str[2]<<endl;
    cout<<str.substr(6,2)<<endl;
    cout<<str.find("babu")<<endl; //first occurence wale ka index de dega
    cout<<str.find("babu",12)<<endl;//12 ka mtlb ki is index se find krna h
    

 
    return 0;
}