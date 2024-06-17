#include<bits/stdc++.h>   
using namespace std;
bool compare (pair < int, int>&a, pair<int , int>&b) {
    double r1  =  (double) a.first / (double) a.second; // here we typecast the integer into double 
    double r2  =  (double) b.first / (double) b.second;
    return r1 > r2; 
    
}
void fructional_knapsack(vector<pair<int , int>>&items, int n , int kanpscak_capaicty){
    sort(items.begin(), items.end(), compare);
    int current_weight = 0;
    int profit = 0;
    for(int i = 0; i < n; i++) {
        if(current_weight + items[i].second <= kanpscak_capaicty) {
            current_weight = current_weight + items[i].second;
            profit = profit + items[i].first;
        } else {
            int remaining_capecity = kanpscak_capaicty - current_weight;
            double fraction = (double) items[i].first / (double) items[i].second;
            profit +=  fraction * remaining_capecity;
        }
    }
     cout<<"profit is : "<<profit;
}
int main(){
    int n , kanpscak_capaicty;
    cout<<"Enter the number of Items in the house : ";
    cin>>n;
    int profit , weights;
    cout<<"Enter the profit and weights of job : ";
    vector<pair<int, int>> items;
    for(int i = 0; i < n; i++){
        cin>>profit>>weights;
        items.push_back({profit, weights});
    }
    cout << "Enter the knapsack capacity ";
    cin>>kanpscak_capaicty;
    fructional_knapsack(items , n, kanpscak_capaicty);
     return 0;
}
