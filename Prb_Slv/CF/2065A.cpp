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
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 1 << endl;
    }
    else if (s.size() == 2)
    {
        cout << (s[0] == s[1] ? 1 : 2) << endl;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
        cout << (count == 0 ? s.size() : 1) << endl;
    }
}