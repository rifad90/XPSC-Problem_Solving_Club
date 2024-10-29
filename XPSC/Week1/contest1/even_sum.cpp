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
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
            if(sum%2==0){
                s=i+1;
            }
        }
        cout<<s<<endl;
    }
    
    
    return 0;
}