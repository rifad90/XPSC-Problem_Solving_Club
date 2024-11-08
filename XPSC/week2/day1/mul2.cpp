#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> ans;
        map<ll,ll> cnt;
        for(int i=0;i<n;i++){
            cnt[a[i]]++;
            if(cnt[a[i]]>=2){
                ll value=a[i];
                while (true)
                {
                    ll total=cnt[value];
                    if(total<2){
                        break;
                    }
                    cnt.erase(value);
                    for(int i=1;i<=(total/2);i++){
                        cnt[2*value]++;
                    }
                    if(total%2!=0){
                        cnt[value]++;
                    }
                    value*=2;
                }
            }
            ans.push_back(cnt.size());
        }
        for (int v:ans)
        {
           cout<<v<<" ";
        }
        cout<<endl;
        
        
    }
    
    
    return 0;
}