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
        long long x;
        int n;
        cin>>n>>x;
        int a[n],b[n];
        vector<long long> total(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            total[i]= a[i]*b[i];
        }
        sort(total.begin(),total.end());
        long long ans=0;
        long long count=0;
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            ans+=total[i];
            count++;
            if(ans>=x){
                flag=true;
                cout<<count<<endl;
                break;
            }
        }
        if(!flag) cout<<"-1"<<endl;
    }
    
    
    return 0;
}