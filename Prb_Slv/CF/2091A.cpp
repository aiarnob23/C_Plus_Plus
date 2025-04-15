#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    int a[10] = {};
    cin >> n;
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        if (a[0] >= 3 && a[1] >= 1 && a[2] >= 2 && a[3] >= 1 && a[5] >= 1 )
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

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
