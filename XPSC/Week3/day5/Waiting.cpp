#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int p=0, b;
    while (t--)
    {
        char c;
        int n;
        cin>>c>>n;
        if(c=='B'){
            p-=n;
            if(p<0){
                p=0;
                cout<<"YES"<<endl;
            }else{
                 cout<<"NO"<<endl;
            }
        }else{
            p+=n;
        }
    }
    


    return 0;
}