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
        vector<int> v(n+1,0);
        int total=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
            total+=a;
        }
        int avg= ((n+1)*100)/2;
        int ans= avg-total;
        if(ans>100){
            cout<<"-1"<<endl;
        }else{
            if(ans<0) cout<<"0"<<endl;
            else cout<<ans<<endl;
        }
    }
    
    return 0;
}