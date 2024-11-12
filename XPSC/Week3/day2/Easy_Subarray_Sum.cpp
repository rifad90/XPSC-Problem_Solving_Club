#include <bits/stdc++.h>
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
        int minus_count=0;
        int sum=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0) minus_count++;
            else sum += arr[i];
        }
        if(minus_count<n) cout<<minus_count<<endl;
        else cout<<"0"<<endl;
    }
    
    return 0;
}