#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin>>t;
    while (t--)
    {
        long n;
        cin>>n;
        long s=0, s1=0;
        vector<long> v(n+2,0);
        for (long i = 1; i <=n; i++)
        {
           long x;
           cin>>x;
           s+=x;
           v[i]=x;
        }
       // s1=s;
        long min_sum=s;
      //  cout<<s<<" ";
        for (long i = 2;i <n; i++)
        {
            int old=v[i];
            int x=0;
            if(v[i-1]+v[i+1]==4){
                x= 4-v[i];
                s-=v[i];
                s+=x;
                v[i]=x;
              min_sum=min(min_sum,s);
              if(min_sum!=s){
                s-=x;
                s+=v[i];
                v[i]=old;
              }
            }
        }
        cout<<min_sum<<endl;
        
    }
    
    return 0;
}