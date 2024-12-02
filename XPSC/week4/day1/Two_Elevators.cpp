#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int one_time=a-1;
        long long int two_time=(c-b)+(b);
        
        if(one_time==two_time) cout<<"3"<<endl;
        if(one_time<two_time) cout<<"1"<<endl;
        if(one_time>two_time) cout<<"2"<<endl;
    }
    
    return 0;
}