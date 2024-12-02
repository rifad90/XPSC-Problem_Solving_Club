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
        ll n;
        cin >> n;
        char c[n];
        ll mid = n / 2;
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ll cnt[n], sum[n];
        for (ll i = 0; i < n; i++)
        {
            char current = c[i];
            ll pos_cnt = 0;
            if (i < mid && current == 'R')
            {
                pos_cnt = n - i - 1;
            }
            else if (i < mid && current == 'L')
            {
                c[i] = 'R';
                pos_cnt = n - i - 1;
            }
            else if (i >= mid && current == 'L')
            {
                if (n % 2 == i)
                {
                    pos_cnt = n - i - 1;
                    pos_cnt = n - pos_cnt;
                }
                else
                {
                    pos_cnt = n - i;
                    pos_cnt = n - pos_cnt;
                }
            }
            else if (i >= mid && current == 'R')
            {
                c[i] = 'L';
                pos_cnt = n - i;
                pos_cnt = n - pos_cnt;
            }
            ll ans = 0;
            if (i > 0)
            {
                ans = sum[i - 1] + pos_cnt;
                sum[i] = ans;
            }
            else
            {
                ans = pos_cnt;
                sum[i] = ans;
            }
            cout<<ans<<" ";
            for (ll j = i + 1; j < n; j++)
            {
                char crnt = c[j];
                ll pos = 0;
                if (j < mid && crnt == 'R')
                {
                    pos=n-j-1;
                }
                else if (j < mid && crnt == 'L')
                {
                     pos=j;
                }
                else if (j >= mid && crnt == 'L')
                {
                     pos=j;
                }
                else if (j >= mid && crnt == 'R')
                {
                     pos=n-j-1;
                }
                ans+=pos;
                cout<<ans<<" ";
            }
            cout<<endl;
          //  cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}