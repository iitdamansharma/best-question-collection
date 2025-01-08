#include<iostream>
using namespace std;
//checking the number is palindrome 
bool check_pelindrom(int n){
    //checking the reverce condition you know

    int i=0;
    int temp=n;
    while(temp!=0){
        i= (i*10)+temp%10;
        temp= temp/10;
    }
    //if reverse is equal to the original number, the 
    //number is palindrom.
    return (i == n);
}
int main(){
    int n = 12331;
    if(check_pelindrom(n)==1){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}