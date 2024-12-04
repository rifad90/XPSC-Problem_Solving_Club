#include <bits/stdc++.h>
#include <iomanip>
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<double> f(n), c(n);
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v[i] = a;
            f[i] = floor((double)a / k);
            c[i] = ceil((double)a / k);
            sum1 += f[i];
            sum2 += c[i];
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << f[i] << " ";
        // }

        // cout << endl;
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << c[i] << " ";
        // }

        // cout << endl;
        if(sum1==0 || sum2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}