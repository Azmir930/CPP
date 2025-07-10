#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll sum = 0;
    if (a < b)
    {
        cout << "-1" << endl;
    }
    else
    {
        if (x > y)
        {
            for (int i = 0; i < b - a; i++)
            {
                if (i % 2 == 0)
                {
                    sum += x;
                }
                else
                {
                    sum += y;
                }
            }
        }
        else
        {
            sum = (b - a) * x;
        }
        cout << sum << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}