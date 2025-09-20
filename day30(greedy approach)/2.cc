#include<iostream>
#include<vector>
#include<algorithm> // needed for sort
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    int count = 1;
    int currEndTime = end[0];

    for(int i = 1; i < start.size(); i++){ // fixed <= to <
        if(start[i] >= currEndTime){ // non-overlapping
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second; // ascending endtime
}

int main(){
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int,int>> activity(3, make_pair(0,0));
    activity[0] = make_pair(0,9);
    activity[1] = make_pair(1,2); // fixed index
    activity[2] = make_pair(2,4); // fixed index

    for(int i=0;i<activity.size();i++){
        cout << activity[i].first << "," << activity[i].second << endl;
    }

    sort(activity.begin(), activity.end(), compare);

    cout << "sorteddddddddddddddddddd" << endl;
    for(int i=0;i<activity.size();i++){
        cout << activity[i].first << "," << activity[i].second << endl;
    }

    return 0;
}
