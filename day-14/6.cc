#include<iostream>   //valid plindrome
using namespace std;

bool ispalindrome(char str[], int n)  {  //str ki jagah "work" nhi ayega??
    int st=0, end=n-1;
    while(st<end) {
        if(str[st++] != str[end--]) {
            cout<<"not a valid palindrome\n";
            return false;
        }
    }

    cout<<" a valid palindrome\n";
    return false;
}

int main()  {

    char word[]="racecar";
    ispalindrome(word, strlen(word));

    return 0;
}