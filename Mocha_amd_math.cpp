#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }long long total_and = a[0];
        for(long long i=1;i<n;i++)
        total_and &= a[i];

        cout<<total_and <<endl;
    }
    return 0;
}