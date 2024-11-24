#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,num;
    cin>>n>>num;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin>> a;
        if(a!=num) v.push_back(a);
    }
    for(ll a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    
    
    return 0;
}