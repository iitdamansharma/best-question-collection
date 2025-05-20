#include<bits/stdc++.h>
using namespace std;

class  Solution {
    public:
    void func(int ind, int sum, vecor<int> &arr, int N, vector<int> &sumSubset){
        if(ind==N){
            sumSubset.push_back(sum);
            return;
        }
        // Pick The element or not we have to check form here whther we have to pich the element or not you know 
        func(ind+1,sum+arr[ind],arr,N,sumSubset);
        //  Do- Not Pick The elememt
        func(ind+1,sum,arr,N,sumSubset);
    }
    void <int> subsetSum(vector<int> &arr, int N){
        vector<int> sumSubset;
        func(0,0,arr,N,sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
    }
}    
int main(){
    

    return 0;
}