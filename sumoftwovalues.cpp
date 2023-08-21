#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n,x;
      cin >> n >> x;
      bool flag = 0;

      vector <int> v(n);
      for(auto &it: v)
            cin >> it;

      vector<pair<int, int>> pp;
      
      for(int i = 0; i < n; ++i) 
      {
            pp.push_back(make_pair(v[i], i + 1));     
            
      }
         sort(pp.begin(), pp.end());

         int ptr1=0, ptr2=n-1;
         while(ptr1<ptr2)
        {
            
         if( pp[ptr1].first + pp[ptr2].first < x )
         ptr1++;
         else

           if( pp[ptr1].first + pp[ptr2].first > x )
           ptr2--;
           

          else 
          if(pp[ptr1].first + pp[ptr2].first == x ) 
            {
         cout<< pp[ptr2].second << ' ' << pp[ptr1].second << endl;
         exit(0);
            }
        }
        cout << "IMPOSSIBLE\n";
        
}