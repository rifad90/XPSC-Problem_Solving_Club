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
        ll a, b, n;
        cin >> a >> b >> n;
        ll arr[n];
        // bool chk[n];
        ll ans=b-1;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
          //  cout<<ans<<" ";
            ll m=arr[i];
            if(m<a){
                ans+=m;
            }else{
                ans+=a;
            }
        }
        if(n==0){
            ans=b;
        }
        cout<<ans<<endl;
    }

    return 0;
}