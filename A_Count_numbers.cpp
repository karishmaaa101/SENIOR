#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
int32_t main()
{
    int n,q;
    cin >> n >> q;
    map <int,int>t;
    while(q--)
    {
        int z,x;
        cin >> z >> x; 

        if(z == 1)
        t[x]++;

        else
        
        cout << t[x] << endl;
    }

}