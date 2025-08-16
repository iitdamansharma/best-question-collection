#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<stack>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<pair<int,int>>>adl;
    void addEdge(int u, int v, int weight){
        pair<int, int> p= make_pair(v, weight);
        adj[u].push_back(p);
    }
    
}