#include<iostream>//double ended queue(deque  )
using namespace std;
#include<deque>
#include<stack>

 
int main() {
    deque<int> deq;
    deq.push_front(2);
    deq.push_front(1);
    deq.push_back(3);
    deq.push_back(4);

    //2 3
    deq.pop_front();
    deq.pop_back();
    cout<<deq.front(); //2
    cout<<deq.back();//3
    return 0;
}