#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   int a[n];
   for(size_t i = 0; i < n; i++) {
      cin >> a[i];
   }

   sort(a, a + n);

   int c    = -1;
   int last = -1;
   vector<int> v;

   for(size_t i = 0; i < n; i++) {
      if(a[i] == last) v[c]++;
      else {
         v.push_back(1);
         c++;
      }
      last = a[i];
   }

   int r      = 0;
   bool all_0 = false;

   while(!all_0) {
      bool found_any = false;
      for(size_t i = 0; i < v.size(); i++) {
         if(v[i] > 0) {
            v[i]--;
            found_any = true;
         }
      }

      all_0 = true;
      if(found_any) {
         r++;
         all_0 = false;
      }
   }

   cout << r;

   return 0;
}