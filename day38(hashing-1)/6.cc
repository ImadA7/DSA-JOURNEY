//pair sum usinf unordered map
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[7]={1,2,7,11,15,5,9} ;
    int n=7;
    int target=9;
    unordered_map<int,int> m; //key=arr[i],val=i
    for(int i=0;i<n;i++){
        int complement=target - arr[i];
        if(m.count(complement)){
            cout<<"ans="<<m[complement]<<","<<i<<endl;
        }
        m[arr[i]]=i;
    }
    return 0;
}  