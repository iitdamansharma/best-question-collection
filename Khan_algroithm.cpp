#include<iostream>
using namespace std;
class Solution {
    public:
    //Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]){
        int indegree[V] ={0};
        for(int i=0; i<V;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for (int i=0; i<V; i++){
            if (indegree[i]==0){
                q.push(i);
            }
        }
        int cut =0;
        //o(v+e);
        while(!q.empty()){
            int node =q.front();
            q.pop();
            cnt++;
            //node is in your topo sort.
            //so please remove it from the indegree

            for(int auto it )
        }
    }
};
int main(){
    return 0;
}