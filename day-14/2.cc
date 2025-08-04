#include<iostream>
using namespace std;
int main()  {
    char arr[5]={'a', 'b', 'c','d','e'};  // '\0' automatically not added
    cout<<arr<<endl;

    char arr2[5]={'c', 'o','d','e','\0'};
    cout<<arr2<<endl;

  
    char arr3[10]={'c', 'o','d','e','\0'};
    cout<<arr3<<endl;
    //cout<<strlen(arr3)<<endl;  //why not prinitng the lenth??

    char work[]= "code"; // '\0' automatically added
    cout<<work<<endl;

    char workin[5]= "code";
    cout<<workin<<endl;

    char working[10]= "code";
    cout<<working<<endl;
    



    return 0;
}