
#include<bits/stdc++.h>
#define int long long int
#define endl '\n'
#define sze(v) (int)v.size()
#define all(v) v.begin(), v.end()
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

 
using namespace std;

signed main()
{
    fast;
    int t; cin >> t;
    while(t--)
    {
       
    string s,temp(""); 
    cin >> s;
    
    //int tempsize=(int)temp.size();
    char maxi = *max_element(all(s));

    for(char i = maxi; i >='a'; --i)
    temp.push_back(i);

    int n= sze(s);
    int tempPtr = 0,l=0,r=n-1,c=0;

    while(l<=r and tempPtr < sze(temp))
    {
        if(s[l]== temp[tempPtr])
        {
            l++;
            c++;

        }
        else if(s[r]== temp[tempPtr])
        {
            r--;
            c++;

        }
        tempPtr++ ;
    }

    if(l>r and c == sze(temp) and tempPtr == sze(temp))
    { 
    cout <<"YES"<< endl;
    }
    else
    cout << "NO" << endl;


    }
}


/*//Author: Manthan-->NoobestOfNoobest
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

using ll=long long int;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define nl '\n'
#define tc ll t; cin >> t; while(t--)
#define int long long int
const ll M = 1e9+7;
#define sz(v) (int)v.size()

int32_t main() {
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);

      tc {

            string s, tmp("");
            cin >> s;

            char maxi = *max_element(all(s));
            for(char i = maxi;  i >= 'a'; --i)
                  tmp.push_back(i);

            int n = sz(s);
            int tmpPtr = 0, left = 0, right = n - 1, cnt = 0;

            while(left <= right and tmpPtr < sz(tmp)) {
                  if(s[left] == tmp[tmpPtr]) {
                        left++;
                        cnt++;
                  } else if(s[right] == tmp[tmpPtr]) {
                        right--;
                        cnt++;
                  } 
                  tmpPtr++;
            }


            cout << (left > right and cnt == sz(tmp) and tmpPtr == sz(tmp) ? "YES\n" : "NO\n");


      }

}*/