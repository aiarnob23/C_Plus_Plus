#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
int parent[100], size[100];

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    // find the origin
    if (v == parent[v])  return v;
    // find the origin of parent
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        // little one under the big one
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, e, total_costs = 0;
    cin >> n >> e;
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        v.pb({w, {x, y}});
    }
    for (int i = 0; i < n; i++)
    {
        make(i);
    }
    sort(v.begin(), v.end());

    for (auto &p : v)
    {
        int w = p.first;
        int a = p.second.first;
        int b = p.second.second;
        if (parent[a] != parent[b])
        {
            Union(a, b);
            total_costs += w;
        }
    }
    cout << total_costs << endl;
}