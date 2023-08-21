// Author: Karishmaaa
#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
signed main()
{
    fast;
    string s;
    cin >> s;
    bool flag = false;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            flag = true;
    }
    if (flag)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        if (s[0] >= 'A' and s[0] <= 'Z')
            s[0] = tolower(s[0]);
        else
            s[0] = toupper(s[0]);
        cout << s << endl;
    }
    return 0;
}