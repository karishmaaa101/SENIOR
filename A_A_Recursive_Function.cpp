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

int rec(int n)
{
if(n==0)
return 1;
else
return  n*rec(n-1);
}

signed main()
{
    fast;
    int n;cin>>n;
    cout << rec(n);
}