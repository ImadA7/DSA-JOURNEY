#include<iostream>
using namespace std;

// cin >> arr[];     // ❌ Invalid syntax
// cout << arr;      // ❌ This prints the *address*, not elements

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}