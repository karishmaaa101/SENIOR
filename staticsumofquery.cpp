#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

    using namespace std;
    signed main ()
    {
    fast;
    int n,q;
    cin >> n >> q;
    int arr[n];
    
    for(int i=1;i<=n;i++){
    cin >> arr[i];
    
    }

    vector<int>pref(n);
    pref[0]=arr[0];
    

    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+arr[i];
    }
    
 
    while(q--)
    {
        int a,b;
        cin>> a>> b;
        
        if(a!=0)
        {
            
            cout << pref[b]-pref[a-1] << endl;

        }
        else
        {
            
            cout << pref[b] << endl;
        }
        
    }
    
    
    }   
    