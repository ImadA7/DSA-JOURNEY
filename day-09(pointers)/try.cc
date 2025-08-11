#include <iostream>
using namespace std;

int setithcountsetbitsbit(int num, int i){
    int count =0;
    while(num>0){
        int ld=num&1;
        count+=ld;
        num<<1;
    }

}


int main()
{
    setithbit(5,2);
    setithbit(6,2);
}