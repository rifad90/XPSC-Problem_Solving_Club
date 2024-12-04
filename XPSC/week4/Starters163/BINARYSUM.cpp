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
        int n,k;
        cin>>n>>k;
        int mid1,mid2;
        if(n%2==0){
            mid1=n/2;
            mid2=n/2;
        }else{
            mid1=n/2+1;
            mid2=n/2;
        }
        if(k==mid1 || k==mid2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}