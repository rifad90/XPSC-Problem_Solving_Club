#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void solve(){
     int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int m_sum=0,s_sum=0;
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end());
        int mid=0;
        if(n%2==0) mid=n/2;
        else mid=n/2+1;
        if(a[0]<b[0]) {
            cout<<a[0]<<endl;
            return;
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
    return 0;
}