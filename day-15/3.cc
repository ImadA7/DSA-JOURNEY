#include<iostream>  ///vectors
#include<vector>
using namespace std;

int main()  {
    vector<int> vec1 = {1,2,3,4};
    cout<<"size : "<<vec1.size()<<endl;
    cout<<"capacity : "<<vec1.capacity()<<endl; 

    vec1.push_back(5);
    cout<<"size : "<<vec1.size()<<endl;
    cout<<"capacity : "<<vec1.capacity()<<endl; 
     

    vec1.pop_back();
    cout<<"size : "<<vec1.size()<<endl;
    cout<<"capacity : "<<vec1.capacity()<<endl; 


    return 0;
}