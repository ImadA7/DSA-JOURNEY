#include<iostream>  //convert to uppercase
using namespace std;

void toupper(char word[], int n) {
    for(int i=0;i<n;i++) {
        char ch=word[i];
        if(ch>='A' && ch<='Z') {   //uppercase
            continue;
        } else {  //lowercase
            word[i] = ch-'a'+'A';
        }
    }
}

int main()  {
    char word[]="ApPle";
    toupper(word, strlen(word));

    cout<<word<<endl;
    


    return 0;
}