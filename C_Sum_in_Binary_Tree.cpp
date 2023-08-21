#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
int32_t main()
{
    int t;cin >> t; 
    while(t--)
    {
        int n;cin >> n;
        int root = 1;
        while(n>1)
        {
            root += n;
            n /=2;
        }
        cout << root << endl;

    }
}