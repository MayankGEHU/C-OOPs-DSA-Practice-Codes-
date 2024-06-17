/*
recursion code  
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int knapsack (int ind, int W, int wt[], vector<vector<int>>&dp,int val[]) {
    if(ind ==0 ) {
         if(wt[0] <= W ){
            return val[0];
            else
            return 0;
         }
    }
    int nottake = 0 + knapsack(ind -1 , W,wt,val);
    int take = INT16_MIN;
    if(wt[ind] <= W)
    take = val[ind] + knapsack (ind -1 , W - wt[ind], wt , val);
    return max(nottake, take);
}
int main () {
    int n =3;
    int wt[] = {3,2,4};
    int val[] ={30, 40 , 20 };
    int W = 6;
    cout<<knapsack(n-1, W, wt, val);
    vector<vector<int>>dp(n+1, vector<int>(W+1, -1));

}

*/
// pick or not pick // take or not take


// change in base case 


/*


//----------- memoization code

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int knapsack (int ind, int W, int wt[], vector<vector<int>>&dp,int val[]) {
if(dp[ind][W] =-1) {
    return dp[ind[W]];
}
    int nottake = 0 + knapsack(ind -1 , W,wt,val);
    int take = INT16_MIN;
    if(wt[ind] <= W)
    take = val[ind] + knapsack (ind -1 , W - wt[ind], wt , val);
    return max(nottake, take);
}
int main () {
    int n =3;
    int wt[] = {3,2,4};
    int val[] ={30, 40 , 20 };
    int W = 6;
    vector<vector<int>>dp(n+1, vector<int>(W+1, -1));

}

*/

//---------  tabulation code

#include <iostream>
#include <vector>
using namespace std;
int knapsack(int n, int W, int wt[], int val[]) {
    vector<vector<int>> dp(n, vector<int>(W + 1, 0));
    for (int w = 0; w <= W; ++w) {
        if (wt[0] <= w)
            dp[0][w] = val[0];
    }
    for (int i = 1; i < n; ++i) {
        for (int w = 0; w <= W; ++w) {
            int notake = dp[i - 1][w]; 
            int take = (wt[i] <= w) ? val[i] + dp[i - 1][w - wt[i]] : 0;  
            dp[i][w] = max(notake, take); 
        }
    }
    return dp[n - 1][W];
}
int main() {
    int n = 3;
    int wt[] = {3, 2, 5};
    int val[] = {30, 40, 60};
    int W = 6;
    int result = knapsack(n, W, wt, val);
    cout << "Maximum value in Knapsack = " << result << endl;
    return 0;
}