#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
       ll n,a,b,c;
       cin>>n>>a>>b>>c;
       ll div= n/(a+b+c);
       if(div>0){
        div*=3;
       }
       if(n%(a+b+c)==0)
       {
        cout<<div<<endl;
       }else{
        int rest=n%(a+b+c);
        //cout<<"rest"<<rest<<endl;
        if(rest<=a){
            cout<<++div<<endl;
        }else if(rest<=(a+b)){
            cout<<div+2<<endl;
        }else{
            cout<<div+2<<endl;
        }
       }
    }
    
    return 0;
}