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
        long long int n,k;
        cin>>n>>k;
        //vector<int> v(n);
        int wastage=INT_MAX;
        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            if(a>=k){
                if(a%k==0)
                wastage=0;
                else{
                    int b=a%k;
                    wastage=min(wastage,b);
                }
            }
        }
        if(wastage==INT_MAX)
        wastage=-1;

        cout<<wastage<<endl;
    }
    
    return 0;
}