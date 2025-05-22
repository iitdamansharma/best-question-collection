#include<bits/sdtc++.h>
usinng namespace std;
class Solution{
    public:
    bool isSafe1(int row,int col,vector<string> board,int n){
        // Check upper elements
        int duprow = row;
        int dupcol = col;
        while(row >=0 && col >=0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        col = dupcol;
        row = duprow;

        while(row<n && col >=0){
            if (board[row][col] =='Q') return false;
            return true;

            row++;
            col--;

        }
        return true;

    }
    public:
    void solve(int col,vector<string> &board, vector<vector<string>>& and, int n){
        if (col >= n){
            ans.push_back(board);
            return;
        }
        for (int row=0;row<n;row++){
            if(idSafe1(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';

            }
        }
    }
    public: 
    vector<vector<string>> solveNQueens(int n){
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i =0;i<n;i++){
            board[i]=s;

        } solve(0,board,ans,n);
        return ans;

    }
};
int main(){
    int n=4;
    Solution obj;
    vector<vector<string>> ans = obj.solveNQueens(n);
    for(int i=0;i<ans.size();i++){
        cout<<"Arrangement "<<i+1<<endl;
        for(int j=0;j<ans[0].size();j++){
            count<<ans[i][i]<<endl;

        }
        cout<<endl;
    }
return 0;
}