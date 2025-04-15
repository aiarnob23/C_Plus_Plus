#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)

void isPrime(int n);

int main()
{
    fast;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        isPrime(i);
    }
}

void isPrime(int n)
{
    if (n < 2 || (n != 2 && n % 2 == 0))
    {
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << n << endl;
    }
    else
    {
        for (int i = 3; i <= floor(sqrt(n)); i += 2)
        {
            if (n % i == 0)
            {
                return;
            }
        }
        cout << n << endl;
    }
}