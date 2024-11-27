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
        int n;
        cin >> n;
        vector<ll> v(n - 1);
        vector<ll> original;
        for (int i = 0; i < n - 1; i++)
        {
            ll a;
            cin >> a;
            v[i] = a;
        }
        // for(ll a:v){
        //     cout<<a<<" ";
        // }
        //  cout<<endl;
        // if (n == 2)
        // {
        //     ll minNum = v[0] - 1;
        //     original.push_back(1);
        //     original.push_back(minNum);
        //     for (auto it = original.rbegin(); it != original.rend(); ++it)
        //     {
        //         cout << *it << " ";
        //     }
        //    cout<<endl;
        // }
        // else
        // {
        ll a1, a2, a3;
        ll a = v[0];
        if (n != 2)
        {
            ll b = v[1];
            ll minNum = min(a, b);
            for (ll i = 1; i < minNum; i++)
            {
                a1 = a - i;
                a2 = i;
                a3 = b - i;
                // cout<<a1<<" "<<a2<<" "<<a3<<endl;

                if (a1 + a2 == a && a2 + a3 == b)
                    break;
            }
            original.push_back(a1);
            original.push_back(a2);
            original.push_back(a3);
            if (n > 3)
            {
                for (int i = 2; i < n - 1; i++)
                {
                    ll d = v[i] - original[i];
                    original.push_back(d);
                }
            }
            // reserve(original.begin(),original.end());
            for (auto it = original.rbegin(); it != original.rend(); ++it)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        else
        {
            cout << v[0] - 1 << " " << "1" << endl;
        }
    }

    return 0;
}