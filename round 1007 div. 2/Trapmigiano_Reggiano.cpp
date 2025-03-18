#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n]; \
    f(i, n) cin >> a[i];
#define iv(v, n) \
    vector<ll> v(n); \
    f(i, n) cin >> v[i];
#define MOD (10000000007)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// Read the question properly
// Don't forget newline!!!!!
// Take care about cin >> t;
// Comment the optimization before debugging
// ALWAYS USE FIXED << SETPRECISION WHILE OUTPUTTING FLOATS

void solve() {
    ll n, s, e;
    cin >> n >> s >> e;

    vector<vector<ll>> adj(n + 1);
    f(i, n - 1) {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // DFS function
    function<void(ll, ll)> dfs = [&](ll v, ll par) {
        for (auto x : adj[v]) {
            if (x != par) {
                dfs(x, v);
            }
        }
        cout << v << " ";
    };

    // Start DFS from node 'e'
    dfs(e, 0);
    cout << nline;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
