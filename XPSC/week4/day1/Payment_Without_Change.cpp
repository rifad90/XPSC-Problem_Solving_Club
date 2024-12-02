#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if ((a * n) + b >= s)
        {

            ll num = s / n;
            ll rest = s % n;
            if(rest<=b) cout<<"YES"<<endl;
            else   cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}