/*Input: deadline[] = [4, 1, 1, 1], profit[] = [20, 10, 40, 30]
Output: 2 60
Explanation: We select 1st and 3rd jobs. All jobs except first job have a deadline of 1, thus only one of these can be selected along with the first job with the total profit gain of 20 + 40 = 60.


Input: deadline[] = [2, 1, 2, 1, 1], profit[] = [100, 19, 27, 25, 15]
Output: 2 127
Explanation: The first and third job have a deadline of 2, thus both of them can be completed and other jobs have a deadline of 1, thus any one of them can be completed. Both the jobs with a deadline of 2 is having the maximum associated profit, so these two will be completed, with the total profit gain of 100 + 27 = 127.*/
#include<bits/stdc++.h>
using namespace std;
vector<int> jobSequencing( vector<int> & deadline, vector<int> & profit){
    int n = deadline.size();
    // total job count which is done 
    int cnt =0;
    // total profit earned 
    int totProfit =0;
    // pair the profite and deadline of 
    // all the job together 
    vector<pair<int,int>> jobs;
    for(int i=0;i<n;i++){
        jobs.push_back({profit[i],deadline[i]});
    }
    //sort the jobs based on profit
    // in decreasing 
    sort(jobs.begin(),jobs.end(),greater<pair<int,int>>());
    // array to check the time slot of the job 
    vector<int> slot(0,n);
    for(int i=0;i<n;i++){
        int start = min(n,jobs[i].second)-1;
        for(int j=start;j>=0;j--){
            // if solt is empty
            if (slot[j]==0){
                slot[j]=1;
                cnt++;
                totProfit+= jobs[i].first;
                break;
            }
        }
    }
    return {cnt,totProfit};
}
int main(){
    vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};
    vector<int> ans = jobSequencing(deadline, profit);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}