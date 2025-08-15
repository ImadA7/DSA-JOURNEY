//first occurence
//waf to find first occurence of an elem in a vector

#include<iostream> 
#include<vector>
using namespace std;

int firstoccur(vector<int> arr, int i, int target) {
    if(i==arr.size()) {
        return -1;  
    } 
    if(arr[i]==target) {
        return i;
    }
    return firstoccur(arr, i+1, target); //agr line 12 pe exist nhi krta to fir ye work krega
}

int main() {
    vector<int> arr = {1,2,3,3,3,4,5,};
    cout<<firstoccur(arr, 0 ,3);
    return 0; 
}