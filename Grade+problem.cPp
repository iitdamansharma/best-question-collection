#include<iostream>
#include<vector>
using namespace std;

int CountPaths(int i, int j, int n, int m, vector<vector<int>>& dp){
    // Base case
    if (i == (n-1) && j == (m-1)) return 1;
    if (i >= n || j >= m) return 0;
    
    // Use memoized result if available
    if (dp[i][j] != -1) return dp[i][j];
    
    // Recur for the right and down cells
    return dp[i][j] = CountPaths(i+1, j, n, m, dp) + CountPaths(i, j+1, n, m, dp);
}

int uniquePaths(int m, int n){
    vector<vector<int>> dp(m, vector<int>(n, -1));
    int num = CountPaths(0, 0, m, n, dp);
    return num;
}

int main(){
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    cout << "Number of unique paths: " << uniquePaths(m, n) << endl;
    return 0;
}
