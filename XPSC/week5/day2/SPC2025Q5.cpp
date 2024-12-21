#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
void solve(){
    int n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        set<ll> s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        if(s.size()<n){
            if(l==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            return;
        }
        ll mul=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mul*= (v[i]^v[j]);
                if(mul>r){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        if(mul>=l && mul <=r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    return 0;
}