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
    ll n, l, r;
    cin >> n >> l >> r;
    ll a[n + 1];
    f(i, n) {
        cin >> a[i + 1];
    }
    ll p[n + 2];
    p[1] = 0;
    for (int i = 1; i <= n; i++) {
        p[i + 1] = p[i] ^ a[i];
    }

    // Define the recursive lambda using std::function
    function<ll(ll)> ans = [&](ll m) -> ll {
        if (m <= n + 1) {
            return p[m];
        }
        bool nodd = n & 1 ^ 1;
        bool modd = m & 1;

        if (nodd && modd) {
            return ans((m - 1) / 2 + 1) ^ p[n / 2 + 1] ^ p[n + 1];
        } else if (nodd) {
            return p[n / 2 + 1] ^ p[n + 1];
        } else if (modd) {
            return ans((m - 1) / 2 + 1) ^ p[n + 1];
        } else {
            return p[n + 1];
        }
    };

    cout << (ans(l + 1) ^ ans(r + 1)) << nline;
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
