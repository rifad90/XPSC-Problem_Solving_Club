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
        int n,x;
        cin>>n>>x;
        int s=0;
        vector<int> v(n);
        int j=0;
        for(int i=n;i>0;i--){
          //  cout<<i<<" ";
            s=pow(2,i);
            v[j]=s;
            j++;
        }
      //  cout<< v.size()<<endl;
       s=0;
       for(int i=0;i<x;i++){
            s=s+v[i];
       }
       for(int i=x;i<v.size();i++){
            s=s-v[i];
       }
        cout<<s<<endl;
    }
    
    return 0;
}