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
    int n;cin >> n;
    int idx;
    int ans=INT_MAX;;
    int i;
    vector <pair<string,int>> s(n);
    for( i=0;i<n;i++)
    {
        cin >> s[i].first;
        cin >> s[i].second;
    }
    for( i=0; i<n; i++) 
    { 
        if(s[i].second < ans)
        {
            ans=s[i].second;
            idx=i;
        }
    }
          for(i=idx;i<n;i++)
          cout << s[i].first << endl;
          for(int i=0; i<idx; i++) 
          cout<< s[i].first<<endl;
    return 0;
}