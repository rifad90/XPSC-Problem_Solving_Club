#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1>>s2;

    long long cnt=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}