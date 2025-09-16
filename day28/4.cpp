#include<iostream>//max area in histogram
using namespace std;//return the area of the largest rectangle in the histogram
#include<vector>
#include<stack>
 
int maxareahistogram(vector<int> height) {
    vector<int> nsl;
    vector<int> nsr;
    stack<int> s;
    //next smaller left
    nsl[0]=-1;
    s.push(0);
    for(int i=1;i<height.size();i++) {
        int curr=height[i];
        while(!s.empty() && curr<= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsl[i]=-1;
        } else {
            nsl[i]=s.top();
        }                               //is day ka last lecture reh rha abhi
        s.push(curr);

    }
    while(!s.empty()) {
        s.pop();
    }

    //next smaller right
    int n=height.size();
    s.push(n-1);
    nsr[n-1]=n;
    for(int i=n-2;i<0;i--) {
        int curr=height[i];
        while(!s.empty() && curr<= height[s.top()]) {
            s.pop();
        }

        if(s.empty())  {
            nsr[i]=n;
        } else {
            nsr[i]=s.top();
        }

    }
}
 


int main() {

    return 0;
}
