\#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adj;

    // Add an edge from u to v with a given weight
    void addEdge(int u, int v, int weight, bool directed = false) {
        adj[u].push_back({v, weight});
        if (!directed) {
            adj[v].push_back({u, weight});
        }
    }

    // Print the adjacency list
    void printGraph() {
        for (auto node : adj) {
            cout << node.first << " -> ";
            for (auto neighbour : node.second) {
                cout << "(" << neighbour.first << ", " << neighbour.second << ") ";
            }
            cout << endl;
        }
    }

    // Depth-First Search (DFS)
    void dfs(int start) {
        unordered_map<int, bool> visited;
        stack<int> s;
        s.push(start);

        while (!s.empty()) {
            int node = s.top();
            s.pop();

            if (!visited[node]) {
                cout << node << " ";
                visited[node] = true;

                for (auto neighbour : adj[node]) {
                    if (!visited[neighbour.first]) {
                        s.push(neighbour.first);
                    }
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(1, 2, 10);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 4, 12);
    g.addEdge(3, 4, 10);

    cout << "Graph adjacency list:\n";
    g.printGraph();

    cout << "\nDFS starting from node 1:\n";
    g.dfs(1);

    return 0;
}