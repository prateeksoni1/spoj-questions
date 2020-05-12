#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        for (int i = m; i <= n; i++)
        {
            if (isPrime(i))
            {
                cout << i << endl;
            }
        }
    }
}