#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    { 
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++ ){
            ll a;
            cin>>a;
            arr[i]=a;
        }
        sort(arr.begin(), arr.end());

        ll min_diff1 = arr[n-3] - arr[0];
        ll min_diff2 = arr[n-1] - arr[2];

        ll result = min(min_diff1, min_diff2);
        cout<<result<<endl;

    }
    
    return 0;
}