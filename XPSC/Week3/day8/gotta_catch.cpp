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
        int n,x,y;
        cin>>n>>x>>y;
      //  vector<int>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a*x<y){
                ans+=(a*x);
            }else{
                ans+=y;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}