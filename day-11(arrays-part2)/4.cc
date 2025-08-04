//buy and sell stocks
#include<iostream>
#include<climits>
using namespace std;

void maxprofit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);

    }

    int maxProfit = 0;
    for(int i=0;i<n;i++){
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currentProfit);
    }
    cout << "Max Profit: " << maxProfit << endl;
};

int main(){
    int pricesarr[6]={7,1,5,3,6,4};
    int n=6;
    maxprofit(pricesarr, n);
    return 0; 


}