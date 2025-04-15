#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)

void solve();

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    int n, m;
    vector<vector<int>> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    if (n == 1 && m == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        map<int, int> pos;
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            pos[v[i][0]] = i + 1;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if ((v[i][j + 1] - v[i][j]) != n)
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        for (auto it : pos)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
}
