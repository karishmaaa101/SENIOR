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
    string s;cin >> s;
for (int i = 0; i < s.length(); i++) 
   {
        s[i] = s[i]^'0'^'1';
    }
    cout << s << endl;
}

/*signed main()
{
    fast;
    //test;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    {
        if(c=='0')
        cout<<'1';
        else if(c=='1')
        cout <<'0';
        
    }

}
cout <<  endl;
}*/

