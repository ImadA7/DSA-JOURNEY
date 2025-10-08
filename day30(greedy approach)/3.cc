#include<iostream>
#include<vector>
#include<algorithm> // required for sort

using namespace std;

bool compare(pair<double,int> p1, pair<double,int> p2){
    return p1.first > p2.first; // descending based on ratio
}

int fractionalKnapsack(vector<int> val, vector<int> wt, int W){
    int n = val.size();
    vector<pair<double,int>> ratio(n, make_pair(0.0, 0)); // pair(ratio, idx)
    
    for(int i=0; i<n; i++){
        double r = val[i] / (double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare);

    double ans = 0; // should be double, since fractional
    for(int i=0; i<n; i++){
        int idx = ratio[i].second; // gives index of wt,val
        if(wt[idx] <= W){
            ans += val[idx];
            W -= wt[idx];
        } else {
            ans += ratio[i].first * W;
            break;
        }
    }

    cout << "max value = " << ans << endl;
    return ans;
}

int main(){
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    fractionalKnapsack(val, wt, W);
    return 0;
}
