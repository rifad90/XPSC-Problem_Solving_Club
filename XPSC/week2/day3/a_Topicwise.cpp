#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    queue<char> q;
    stack<char> st;
    q.push(s[0]);
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        char c = st.top();
        if (c == '/' && s[i] == '/')
        {
        }
        else
        {
            q.push(s[i]);
            st.push(s[i]);
        }
    }
    while (!q.empty())
    {
       cout<<q.front();
       q.pop();
    }
    
  //  cout << s << endl;
    return 0;
}