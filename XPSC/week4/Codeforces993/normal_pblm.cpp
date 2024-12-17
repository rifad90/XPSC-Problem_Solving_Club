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
        string s;
        cin>>s;
        string word;
        int l= s.size();
        for (int i = l-1; i >=0; i--)
        {
            if(s[i]=='p'){
                word+='q';
            }else if(s[i]=='q'){
                word+='p';
            }else{
                word+=s[i];
            }
        }
        cout<<word<<endl;
        
    }
    
    return 0;
}