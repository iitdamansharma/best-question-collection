/*A farmer wants to farm their land with the maximum area where good land is present. The “land” is represented as a matrix with 1’s and 0’s, where 1s mean good land and 0s mean bad land. The farmer only want to farm in a square of land with the maimum area. Please help the farmer to find the maximum area of the land they can farm in the good land. 
Example :
0 1 1 0 1
1 1 0 1 0
0 1 1 1 0
1 1 1 1 0 
1 1 1 1 1
0 0 0 0 0 
*/
// intution 
/*
so instead of checking every possible (which would be inefficient) so we can use dynamic programming to find the maximum area of the land they can farm in the good land.
1. if a cell(i,j) is good land, then we can check the maximum area of the land they can farm in the good land by checking the maximum area of the land they can farm in the good land in the cell (i-1,j-1), (i-1,j), (i,j-1) and (i+1,j+1).

*/
#include<bits/stdc++.h>
int largestSquare(vector<vector<int>>& binArray){
    int n = binArray.size();
    int m = binArray[0].size();
    // Dp table to store max square size at each cell 

    vector<vector<int>> dp(n,vector<int>(m,0));
    int maxSquare=0;

    
}
using namespace std;
int main(){

    return 0;
}

