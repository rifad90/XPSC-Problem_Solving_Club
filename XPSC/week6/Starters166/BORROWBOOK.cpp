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
        vector<int>v(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]=i+1;
        }
        int sum=0;
        for(auto a:m){
            sum+= a.second;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}