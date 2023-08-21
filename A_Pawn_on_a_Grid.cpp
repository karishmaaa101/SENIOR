
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


signed main(){
    fast;
    int h,w;
    int c = 0;
    cin >> h >> w;
    vector<string> a(h); 
    for (int i = 0; i < h; i++)
     {
    cin>>a[i];
     }

     for (int i = 0; i < h; i++)
     {
        for (int j = 0; j < w; j++) 
        {
           if(a[i][j] == '#')
             c++;
     
        }
       
    }
    cout << c << endl;
}
