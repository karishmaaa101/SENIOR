//Author: Karishmaaa
#include<bits/stdc++.h>
#define int long long int
#define endl '\n'
#define test  int tc; cin>>tc; while(tc--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

 using namespace std;

signed main()
{
    test
    {
        int n;cin >> n;int res;
        string s;cin >> s;
        
        
        sort(s.begin(),s.end());
        
        for(int i=0;i<n;i++)
        {
         res = s[i]-'a'+1;
        }
        cout << res << endl;
    }
    return 0;
}