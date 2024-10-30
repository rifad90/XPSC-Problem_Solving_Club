#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,string>mp;
    while (n--)
    {
       string key,value;
       cin>>key;
       cin.ignore();
       cin>>value;
       mp[key+" "+value]=value;
    }

    cout<<mp.size()<<endl;
    
    return 0;
}