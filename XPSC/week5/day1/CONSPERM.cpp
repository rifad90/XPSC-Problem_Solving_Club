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
        if(n%2==0){
            cout<<"-1"<<endl;
            continue;
        }
        int even=n-1;
        int odd=1;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<even<<" ";
                even-=2;
            }else{
                cout<<odd<<" ";
                odd+=2;
            }
        }
        cout<<endl;
    }
    
    return 0;
}