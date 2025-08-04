//find binomical coeeff for gievn n and r

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// One factorial function reused for n!, r!, and (n - r)!
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Calculates nCr = n! / (r! * (n - r)!)
int binomialCoefficient(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    cout << binomialCoefficient(5, 2) << endl;  // Output: 10
}

 