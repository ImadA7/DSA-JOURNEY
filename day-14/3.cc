#include<iostream>  //input char array
using namespace std;
int main()  {

    char word[30];
    cin>>word; //whitespace ke baad print nhi krta

    cout<<"your word was : " << word<<endl;

    char sentence[30];
    cin.getline(sentence, 30);

    cout<<"your word was : "<< sentence << endl;

    return 0;
}