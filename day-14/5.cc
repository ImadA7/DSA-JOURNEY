#include<iostream>  //reverse a char array
#include<cstring>
using namespace std;

void reverse(char word[], int n) {
    int st=0, end=n-1;
    while(st<end){ //<= bhi laga skte hein , koii dikkt ni hein
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

int main()  {
    char word[]="code";
    reverse(word,strlen(word));
    cout<<"reverse = " <<word<<endl;

    

    return 0;
}