
#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
signed main()
{
    fast;
    int x;cin >> x;
    while(x--)
    {
        int n;cin >> n;
        vector<int>powersofprime;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int power=0;
                while(n%i==0)
                {
                    power++;
                    n/=i;

                }
                powersofprime.push_back(power);
            }
        }
        
            if(n!=1)  //if the number has no powers,for ex,17
            powersofprime.push_back(1);

            int numofDiv=1;

            for(int z:powersofprime)
            {
                numofDiv *= (z+1);
            }
            
            cout << numofDiv << endl;

        }
    }

