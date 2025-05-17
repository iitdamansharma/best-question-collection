#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    ll t;
    cin>>t;
    while(t--){
   ll n;
   cin>>n;
   vector<ll>a(n);
   for(ll i=0;i<n;i++)
   cin>>a[i];
   ll count_of_ones =0;
   ll count_of_zero =0;
   for(ll i=0;i<n;i++){
    if(a[i]==1)
    count_of_ones++;
    else if(a[i]==0)
    count_of_zero++;
   }
   ll ways = pow(2,count_of_zero)*count_of_ones;
   cout<<ways<<endl;
}
return 0;
}