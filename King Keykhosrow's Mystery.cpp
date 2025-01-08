#include<bits/stdc++.h>
using namespace std;
int max(int a,int b ){
    int m=max(a,b);
    
    while ((m%a)!=(m%b)){
        ++m;
    }
    return m;

}

int main(){
 int t;
cin>>t;

 while(t>=0){
    int a,b;
    cin>>a>>b;
    cout<<max(a,b)<<endl;

 }
    return 0;

}