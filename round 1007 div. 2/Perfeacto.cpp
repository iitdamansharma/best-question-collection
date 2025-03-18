#include<bits/stdc++.h>
using namespace std;
/*
Quwstion 2
A permutation p
 of length n
∗
 is perfect if, for each index i
 (1≤i≤n
), it satisfies the following:

The sum of the first i
 elements p1+p2+…+pi
 is not a perfect square†
.
You would like things to be perfect. Given a positive integer n
, find a perfect permutation of length n
, or print −1
 if none exists.

∗
A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array), and [1,3,4]
 is also not a permutation (n=3
 but there is 4
 in the array).

†
A perfect square is an integer that is the square of an integer, e.g., 9=32
 is a perfect square, but 8
 and 14
 are not.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first and only line of each test case contains a single integer n
 (1≤n≤5⋅105
).

It is guaranteed that the sum of n
 over all test cases does not exceed 106
.

Output
For each test case:

If no solution exists, print a single integer −1
.
Otherwise, print n
 integers p1,p2,…,pn
 — the perfect permutation you find.
If there are multiple solutions, print any of them.
*/
/*
#define ll long long
#define f(i,n) for (ll i-0;i<n;i++)
#define ia(a,n) \
    ll a[n];
    f(i,n) cin>>a[i]
#define iv(v,n)
    vector<ll>v(n); \
    f(i,n) cin >>v[i]
#define MOD (10000000007)
#define INF 1000000000000000000LL // Infinty for ll
#define mp make_pair
#define nline '\n'
#define yes cout<<"YES\n"
#define no cout <<"NO\n"

template<typename T>
using os -tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T>
using oms -tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

// read question propely 
// don't forget newline!!!!!
//take care about cin>>t;
// comment the optimiztion before debugging 
//ALWAYS USE FIXED << SETPRECTIONS WHILE OUTPUTTING FLOATS
*/
 

void Solve(){
    auto check= [&](int k){
        int j = sqrtl((int64_t)k*(k+1)/2);
        return ((int64_t)j*j !=(int64_t)k*(k+1)/2);

    };
    int n;
    cin>>n;
    if(!check(n)){
        cout<<"-1\n";
        return;
    }
    vector<int> ans(n+1);

    for(int i=1;i<=n;i++){
        ans[i]=i;
    }
    int j=0;
    for(int i=1;i<n;i++){
        while((int64_t)j*j<(int64_t)i*(i+1)/2)j++;
        if((int64_t)j*j == (int64_t)i*(i+1)/2){
            swap(ans[i],ans[i+1]);

        }
        cout<<ans[i]<<" ";

    }
    cout<<"\n";

}
int main(){
    int tt=1;
    cin>>tt;
    while(tt--){
        Solve();
    }
    return 0;
}
