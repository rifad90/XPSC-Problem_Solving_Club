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
        cin.ignore();
        string s,t;
        cin>>s>>t;
       // bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                int j=i+1;
                while (j<n && s[j] == t[j])
                {
                   j++;
                }
                if(j==n){
                   // cout<<"NO"<<endl;
                    break;
                }
                s[i]=t[i];
                s[j]=t[j];
            }
        }
       // cout<<"R ";
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}