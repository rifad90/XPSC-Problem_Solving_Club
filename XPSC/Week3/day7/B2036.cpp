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
        int n,k;
        cin>>n>>k;
        vector<int> company(k+1,0);
        for(int i=0;i<k;i++){
            int id,amount;
            cin>>id>>amount;
            company[id]+=amount;
        }
        sort(company.begin(),company.end(), greater<int>());
        int ans=0;
        for(int i=0;i<min(n,k);i++){
            ans+= company[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}