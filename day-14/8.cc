#include<iostream>
#include<cstring>
using namespace std;
int main()  {
    char str1[100]="abc";
    char str2[100]="hello babu";
    strcat(str1,str2);
    cout<<str1<<endl;
    cout<<strcmp(str1,str2)<<endl;



    return 0;
}