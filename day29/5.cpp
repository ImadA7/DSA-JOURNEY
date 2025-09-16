#include<iostream>//interleave 2 queues
using namespace std;
#include<queue>

void interleave(queue<int> &org) { //pass by referance
    int n=org.size();
    queue<int> first;

    for(int i=0;i<n/2;i++) {
        first.push(org.front());
        org.pop();
    }
    while(!first.empty()) {
        org.push(first.front());
        first.pop();
        org.push(org.front());
        org.pop();     
    }

}
int main() {
    queue<int> org;

    for(int i=1;i<=10;i++) {
        org.push(i);
    }
    interleave(org);
    for(int i=0;i<=10;i++ ) {
        cout<<org.front()<<" ";
        org.pop();
    }
    cout<<endl;
    return 0;
}