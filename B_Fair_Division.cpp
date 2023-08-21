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
    int n; cin >> n;
    int a[n],i,sum=0,count1=0,count2=0;
    bool flag = false;

    for( i=0;i<n;i++)
    {
    cin >> a[i];
    sum+=a[i];
    
      if(a[i]==1)
      count1++;  
      else
      count2++;
    }

      if(sum%2==1)
      {
       cout << "NO" << endl;
        continue;
      }
        sum/=2;
        if(sum%2==1)
	    {
	        if(count1 == 0)
	        cout << "NO" << endl;
	        else
            cout << "YES" << endl;
	
	    }

        if(flag)
        cout <<"YES" << endl;

    }

}
