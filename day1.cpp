
/*#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(int i=2;i<n;i++)
        {
            ans = min(ans,abs(a[i] - a[i-1]) + abs(a[i-1] - a[i-2]));
        }
        cout<<ans<<endl;

    }
}*/




/*#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() 
{
	int n,m;
    float sum=0,count=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
     sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
     if(a[i]>=sum/(4.0*m))
    
     count++;
    }
    if(count>=m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}*/

//https://atcoder.jp/contests/abc278/tasks/abc278_b
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
      int h, m;
      cin >> h >> m;

      while(1) 
      {

            int a, b, c, d;
            a = h / 10;
            b = h % 10;
            c = m / 10;
            d = m % 10;

            string p = to_string(a) + to_string(b);
            string q = to_string(c) + to_string(d);

            swap(p[1], q[0]);
            //cout<<p<<endl;
            // cout<<q<<endl;
            int hour= stoi(p);
            int minute=stoi(q);
            if(hour<24 && minute<60)
            {
                  cout<<h<<" "<<m;
                  break;
            }

            if(m <= 58) 
            {
             m++;
            } else 
            {
                  // is block me m ki value 59 h
                  if(h <= 22) {
                        h++;
                        m = 0;
                  } else {
                        // h is 23 and m is 59
                        h = 0;
                        m = 0;
                  }
            }

      }
}*/

#include <bits/stdc++.h>
using namespace std;

#ifdef SHIVANK
#include "debug.hpp"
#else
#define debug(...)
#endif

#define int long long
#define endl "\n"
#define all(v) v.begin(), v.end()

bool check(int h, int m) {
    if (h >= 0 && h <= 23 && m >= 0 && m <= 59) return true;
    return false;
}

void solve() {
    int h, m;
    cin >> h >> m;
    while (true) {
        int a = h / 10;
        int b = h % 10;
        int c = m / 10;
        int d = m % 10;
        int conft_h = a * 10 + c;
        int conft_m = b * 10 + d;
        if (check(conft_h, conft_m)) {
            cout << h << " " << m << endl;
            break;
        }
        m++;
        if (m == 60) {
            m = 0;
            h += 1;
        }
        if (h == 24) {
            h = 0;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
}



/*#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() 
{
    int n,i;
    cin>>n;
    string s[n];
    bool ans=false;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    
    if(s[i]== "and" or s[i]== "not" or s[i]== "that" or s[i]== "the" or s[i]== "you")
    ans=true;
    
    }
    if(ans)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}*/


