#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
       cin>>a;
       v.push_back(a);
    }
    set<int> s;
    vector<int> cnt(n+1);
    for (int i = n-1; i >=0; i--)
    {
        int a=v[i];
        s.insert(a);
        cnt[i]=s.size();
    }
    while(t--){
    int pos;
    cin>>pos;

    cout<<cnt[pos-1]<<endl;
    }

    
    return 0;
}