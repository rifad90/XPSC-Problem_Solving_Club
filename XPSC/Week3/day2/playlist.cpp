#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> v;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
           if(b==l) v.push_back(a);
        }
        
        int ans=0;
        if(v.size()>= k){
            sort(v.begin(),v.end(),greater<int>());
            for(int i=0;i<k;i++){
                ans+=v[i];
            }
        }else{
            ans=-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}