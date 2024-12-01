#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<string, int> mp;
    deque<string> q;
    while (t--)
    {
        string word;
        cin >> word;
        if (mp[word] < 1)
        {
            mp[word]++;
            q.push_back(word);
        }
        else
        {
            q.erase(remove(q.begin(),q.end(),word),q.end());
            q.push_back(word);
        }
    }
    string ans = "";
    while (!q.empty())
    {
       string w = q.back();
        q.pop_back();
        ans+=w[w.size() - 2];
        ans+=w[w.size() - 1];
    }
    
    cout << ans << endl;

    return 0;
}