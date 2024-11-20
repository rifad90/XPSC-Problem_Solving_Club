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
        int n,m;
        cin>>n>>m;
        map<int,int> mp;
        vector<int>v(m+1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[i]=x;
        }
        for(int i=1;i<=m;i++){
            int x;
            cin>>x;
            v[i]=x;
        }
         int sad=0;
        for(int i=1;i<=m;i++){
         //   cout<<v[i]<<" ";
            int x=mp[v[i]];
            if(x==0){
                sad++;
            }else{
                mp[v[i]]--;
            }
        }
         cout<<sad<<endl;
    }
    
    return 0;
}