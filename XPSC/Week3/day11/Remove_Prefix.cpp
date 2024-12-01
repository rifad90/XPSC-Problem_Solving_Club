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
        int n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            s.insert(a);
        }
        cout<<n-s.size()<<endl;
    }
    
    return 0;
}