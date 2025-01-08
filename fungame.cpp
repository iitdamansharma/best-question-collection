#include<iostream>
#define ll  long long 


using namespace std;
ll gcd(ll a, ll b){
    return b==0 ? a : gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}
void Solve(){
    ll n;
    cin>>n;
    string s,t;

    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            cout<<"YES"<<endl;
        }
        else{
            if(s[i]!=t[i]){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
}  
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        Solve();
    }
    return 0;
}