//union and inrersection of two arrays
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void printUnion(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;
    for(int el:arr1){
        s.insert(el);
    }
    for(int el:arr2){
        s.insert(el);
    }
    cout<<"Union is: ";
    for(int elem : s){
        cout<<elem<<" ";
    }
    cout<<endl;
}

void printIntersection(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;
    for(int el:arr1){
        s.insert(el);
    }
    cout<<"Intersection is: ";
    for(int el:arr2){
        if(s.count(el)){
            cout<<el<<" ";
            s.erase(el); //to avoid duplicates in intersection
        }
    }
    cout<<endl;
}

int main()
{
    vector<int> arr1={6,3,9,2,9,4};
    vector<int> arr2={7,3,9};
    printUnion(arr1,arr2);
    printIntersection(arr1,arr2);


    return 0;
}
