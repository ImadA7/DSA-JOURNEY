#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(10);
    pq.push(9);
    pq.push(7);
    pq.push(3);
    pq.push(20);
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Should print elements in descending order: 20 10 5
        pq.pop();
    }
    cout << "top element: " << pq.top() << endl; // Should print 20
    return 0;
}