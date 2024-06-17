#include<bits/stdc++.h>
using namespace std;
// comparetor - : int activiteSelction slection when sort function is executed then comapre methode will call fir the a less then b then it is swep the activies.begin() and activies.end() but if the compare return true then it skip the task and move on.
bool compare (pair < int, int>&a, pair<int , int>&b) {
   return a.first < b.second;
}
void activiteSelction(vector<pair<int ,int>>&activies, int n){
    sort(activies.begin(), activies.end(), compare);
    int i = 0;
    cout<<activies[0].first <<" "<<activies[0].second;
    for(int j = 1; j < n; j++) {
        if(activies[j].first >= activies[i].second ) {
           cout<<activies[j].first <<" "<< activies[j].second;
           i = j;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of activies : ";
    cin>>n;
    cout<<"Enter the start and end time of activie : ";
    vector<pair<int, int>>activies;
    int start , end;
    for(int i = 0; i < n; i++){
        cin>>start>>end;
        activies.push_back({start, end});
    }
     activiteSelction(activies , n);
     return 0;
}
