#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)

int solve();

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

int solve()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    map<int, int> m;
    m[a[0] + a[1]]++;
    m[a[2] - a[1]]++;
    m[a[3] - a[2]]++;

    int count = 1;
    for (auto it : m)
    {
        if (it.second > count)
        {
            count = it.second;
        }
    }
    cout << count << endl;

    return 0;
}
