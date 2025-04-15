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
    int n, k, p;
    cin >> n >> k >> p;
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }

    int result = ceil(float(abs(k)) / p);
    cout << (result > n ? -1 : result) << endl;
}