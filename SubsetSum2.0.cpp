// We are starting with first approch which is coming on our eyes you know 
#include<bits/stdc++.h>
using namespace std;    
bool subsetSumUtil(int ind, int target, vector<int> &arr, vector<vector<int>> & dp){
    // if the target is 0 , we have found a subset
    if(target ==0) return true;

    if (ind == 0)
    return arr[0] == target;
    if(dp[ind][target]!=-1) return dp[ind][target];
    bool notTake = subsetSumUntil(ind-1, target, arr, dp);
    bool take = false;
    if(arr[ind]<= target){
        taken = subsetSumUnit(ind-1, target-arr[ind], arr, dp);
        return dp[ind][target]= notTake || taken;

    }



    
}
bool subsetSum(int N, int target, vector<int> & arr){
    // Initializing a 2D vector for memoization
    vector<vector<int>> dp(n,vector<int>(target + 1,-1));
    //Call the recursive utility function
    return subsetSunUtil(N-1, target, arr, dp);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int k=5;
    int n = arr.size();
    if(subsetSumTok(n,k,arr))
        cout << "Subset with given sum exists." << endl;
    else
        cout << "No subset with given sum exists." << endl;
 return 0;
}