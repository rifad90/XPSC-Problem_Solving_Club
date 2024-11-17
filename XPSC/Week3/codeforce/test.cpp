#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

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
        vector<int> v;
        vector<int> x(n,0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]==v[j]) {
                    if(x[i]==0 && x[j]==0){
                    ans++;
                   // cout<<v[i]<<" "<<v[j]<<endl;
                    x[i]=1;
                    x[j]=1;
                    }
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<x[i]<<" ";
        // }
        // cout<<endl;
        cout<<ans<<endl;
    }
    
    
    return 0;
}