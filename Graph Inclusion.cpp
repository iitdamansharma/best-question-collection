#include<bits/stdc++.h>

using namespace std;             

const int N = 400043;
const int BUF = N * 20;

int* where[BUF];
int val[BUF];
int cur = 0;

void change(int& x, int y)
{
    val[cur] = x;
    where[cur] = &x;
    x = y;
    cur++;
}

void rollback()
{
    cur--;
    (*where[cur]) = val[cur];
}

struct DSU
{
    vector<int> p, s;
    int n;
    int comps;

    int get(int x)
    {
        if(p[x] == x) return x;
        return get(p[x]);
    }

    void merge(int x, int y)
    {
        x = get(x);
        y = get(y);
        if(x == y) return;
        change(comps, comps - 1);
        if(s[x] < s[y]) swap(x, y);
        change(p[y], x);
        change(s[x], s[x] + s[y]);    
    }

    DSU(int n = 0)
    {
        this->n = n;
        s = vector<int>(n, 1);
        p = vector<int>(n);
        iota(p.begin(), p.end(), 0);
        comps = n;
    }
};

struct edge
{
    char g;
    int x;
    int y;
    edge(char g = 'A', int x = 0, int y = 0) : g(g), x(x), y(y) {};
};

DSU A, united;
vector<edge> T[4 * N];
int ans[N];

void dfs(int v, int l, int r)
{
    int state = cur;
    for(auto e : T[v])
    {
        united.merge(e.x, e.y);
        if(e.g == 'A') A.merge(e.x, e.y);   
    }
    if(l == r - 1)
    {
        ans[l] = A.comps - united.comps;
    }
    else
    {
        int m = (l + r) / 2;
        dfs(v * 2 + 1, l, m);
        dfs(v * 2 + 2, m, r);
    }
    while(state != cur) rollback();
}

void add_edge(int v, int l, int r, int L, int R, edge e)
{
    if(L >= R) return;
    if(L == l && R == r) T[v].push_back(e);
    else
    {
        int m = (l + r) / 2;
        add_edge(v * 2 + 1, l, m, L, min(m, R), e);
        add_edge(v * 2 + 2, m, r, max(L, m), R, e);
    }
}

map<pair<int, int>, int> last[2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    A = DSU(n);
    united = DSU(n);
    for(int i = 0; i < q; i++)
    {
        string s;
        int x, y;
        cin >> s >> x >> y;
        --x;
        --y;
        int idx = (s[0] == 'A' ? 0 : 1);
        if(x > y) swap(x, y);
        if(last[idx].count(make_pair(x, y)) == 0)
        {
            last[idx][make_pair(x, y)] = i;
        }
        else
        {
            add_edge(0, 0, q, last[idx][make_pair(x, y)], i, edge(s[0], x, y));
            last[idx].erase(make_pair(x, y));
        }
    }
    for(int i = 0; i < 2; i++)
        for(auto a : last[i])
            add_edge(0, 0, q, a.second, q, edge(char(i + 'A'), a.first.first, a.first.second));
    dfs(0, 0, q);
    for(int i = 0; i < q; i++)
        cout << ans[i] << "\n";
}