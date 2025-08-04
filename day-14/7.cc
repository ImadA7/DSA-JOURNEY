#include<iostream>
#include<cstring>
using namespace std;
int main()  {
    


    char str1[100];
    char str2[100]="hello babu";
    //str1="apna";
    strcpy(str1,"imad ahmed");
    cout<<str1<<endl;
    strcpy(str1,str2);
    cout<<str1<<endl;
    strcat(str1,str2);
    cout<<str1<<endl;

    return 0;
}