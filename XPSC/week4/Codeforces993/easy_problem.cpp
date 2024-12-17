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
        int cnt=0;
        for(int i=1;i<n;i++){
            cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}