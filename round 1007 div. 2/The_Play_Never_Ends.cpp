#include<bits/stdc++.h>
using namespace std;
/*
Question 1 
Let's introduce a two-player game, table tennis, where a winner is always decided and draws are impossible.

Three players, Sosai, Fofo, and Hohai, want to spend the rest of their lives playing table tennis. They decided to play forever in the following way:

In each match, two players compete while the third spectates.

To ensure fairness, no player can play three times in a row. The player who plays twice in a row must sit out as a spectator in the next match, which will be played by the other two players. Otherwise, the winner and the spectator will play in the next match, while the loser will spectate.
Now, the players, fully immersed in this infinite loop of matches, have tasked you with solving the following problem:

Given an integer k
, determine whether the spectator of the first match can be the spectator in the k
-th match.
*/
void solve(){
    int k;
    cin>>k;
    if(k%3==1){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
int main(){
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}