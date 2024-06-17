#include<bits/stdc++.h>
using namespace std;
bool compare (pair < int, int>&a, pair<int , int>&b) {
    return (a.first > b.second);
}
void job_Sequensing(vector<pair<int , int>>&jobs, int n){
        int profit = 0;
        sort(jobs.begin(), jobs.end(), compare);
        int maxDeadline = 0;
        for(int i =0; i< n; i++) {
            maxDeadline = max(jobs[i].second, maxDeadline);
        }
        vector<int>abc(maxDeadline + 1 , 0);
        for(int i =0; i < n; i++){
            int dedlineNew = jobs[i].second;
            if(abc[dedlineNew] != 0) {
                while(dedlineNew > 0 && abc[dedlineNew] == 1) {
                    --dedlineNew;
                }
            }
            if(dedlineNew > 0) {
                abc[dedlineNew] = 1;
                profit = profit + jobs[i].first;
            }
        }
        cout<< "Profit is : "<<profit;
}
int main(){
    int n;
    cout<<"Enter the number of jobs: ";
    cin>>n;
    int profit , dedline;
    cout<<"Enter the profit and dedline of job : ";
    vector<pair<int, int>>jobs;
    for(int i = 0; i < n; i++){
        cin>>profit>>dedline;
        jobs.push_back({profit, dedline});
    }
    job_Sequensing(jobs , n);
     return 0;
}
