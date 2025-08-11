#include<iostream>
using namespace std;
 

int main()  {
    int size;
    cin>>size;

    int *imad= new int[size]; //new memory allocate kr skte h... imad point kr rha hei  size ki jitni memory allocate hui hein . new is used to make memory 

    int x=1;
    for(int i=0; i<size; i++)  {
        imad[i]=x;
        cout<<imad[i]<<" ";
        x++;
    }         

    cout<<endl;

    //delete [] imad; //ab ye memory jo allocate hui thi vo delete ho gyi
    return 0;
} 