#include <bits/stdc++.h>
using namespace std;

// input
// 10
// 5
// Timur
// 5
// miurT
// 5
// Trumi
// 5
// mriTu
// 5
// timur
// 4
// Timr
// 6
// Timuur
// 10
// codeforces
// 10
// TimurTimur
// 5
// TIMUR

// output
// YES
// YES
// YES
// YES
// NO
// NO
// NO
// NO
// NO
// NO



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T' ||s[i] == 'r'||s[i] == 'u'||s[i] == 'm'  || s[i] == 'i')
            {
                mp[s[i]]++;
                if(mp[s[i]]>1) flag=false;
            }else{
                flag=false;
            }
            // if (s[i] == 'i')
            // {
            //     mp[s[i]]++;
            // }
            // if (s[i] == 'm')
            // {
            //     mp[s[i]]++;
            // }
            // if (s[i] == 'u')
            // {
            //     mp[s[i]]++;
            // }
            // if (s[i] == 'r')
            // {
            //     mp[s[i]]++;
            // }
        }
        if(flag) {
            if(mp.size()==5)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}