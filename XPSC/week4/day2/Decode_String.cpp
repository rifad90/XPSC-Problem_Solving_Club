#include <bits/stdc++.h>
using namespace std;
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
        string word;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int num = s[i - 1]-'0';
                num += (s[i - 2]-'0') * 10;
                i = i - 2;
                word += num-1+ 'a';               
            }
            else
            {
                int num = s[i]-'0';
                word +=  num-1+ 'a';
            }
        }
        reverse(word.begin(),word.end());
        cout<<word<<endl;
    }

    return 0;
}