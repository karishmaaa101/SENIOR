#include<bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    string s,t;
    cin >> s >> t;

    int n=min(s.length(),t.length());  //codeforces,yes ka minimum

    int size1 = s.length();           
    int size2 = t.length();

    int sum = size1 + size2;           //total length

    size1 = size1 - 1;    //because length will me measured from 1
    size2 = size2 - 1;
    
    int c = 0;                      // counter

    while(n--)                   //until we reach the minimum word
    {
        if(s[size1] == t[size2])          // string1 size equals string2 size
        {
            c++;                  // no of moves ie count will be incremented
            size1--;              //size1 will be reduced  by one move            
                                  //size2 will be reduced by one move
            size2--;
        }
        else break;          
    }
    cout << (sum - 2*c) << endl;     //printing sum - 2*c whatever was counted from the two words
    
}


