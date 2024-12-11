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
        int n,k,p;
        cin>>n>>k>>p;
        vector<int> v(n);
        int sum=0,max=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]>max) max=v[i];
        }

        sum-=max;

        if(max+ k> sum+p) cout<<"Ved"<<endl;
        else if(max+ k<sum+p) cout<<"Varun"<<endl;
        else cout<<"Equal"<<endl;
    }
    
    return 0;
}