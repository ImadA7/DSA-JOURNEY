//last occurence
//waf to find last occurence of an elem in a vector

#include<iostream> 
#include<vector>
using namespace std;

int lastoccur(vector<int> arr, int target, int i) {
    if(i==arr.size()) {
        return -1;  
    } 
    int idxfound =  lastoccur(arr, target, i+1);
    if(idxfound== -1 && arr[i]==target) {
        //if(arr[i]==target) { ..ye line ko mix kr diy line 12 mein
        return i;
        
    }

    
    return idxfound;
}

int main() {
    vector<int> arr = {1,2,3,3,3,4,5,};
    cout<<lastoccur(arr ,3,0);
    return 0; 
}