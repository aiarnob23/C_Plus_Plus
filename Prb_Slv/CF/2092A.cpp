#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define ll long long
#define endl '\n'

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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[n - 1] - v[0] << endl;
}