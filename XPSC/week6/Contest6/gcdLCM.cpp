#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm> 
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        long long int sum = INT_MAX;

        while (k--)
        {
            int a;
            if (x == y)
            {
                cout << x + x << endl;
                break;
            }
            else
            {
                if (x > y)
                {
                }
                else
                {
                    y = a;
                    y = x;
                    x = a;
                }
                int g = gcd(x, y);
                x = g;
                long long int l = lcm(x, y);
                if (x > y)
                {
                    x = l;
                }
                else
                {
                    y = l;
                }
                sum = min(sum, l + g);
            }
        }
        cout << sum << endl;
    }

    return 0;
}