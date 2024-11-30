#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int TEST_CASES;
   cin >> TEST_CASES;

   for(int T = 1; T <= TEST_CASES; ++T) {
      int n;
      cin >> n;
      int a[n];
      map<int, int> mp;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         mp[a[i]]++;
      }

      if(mp.size() == 1) {
         cout << 0 << endl;
         continue;
      }

      int cnt = mp[a[0]];
      for(auto x : mp) {
         cnt = max(cnt, x.second);
      }

      int ans  = 0;
      int left = n - cnt;

      while(left > 0) {
         ans++;
         ans  += cnt;
         left -= cnt;
         cnt  += cnt;
      }

      ans += left;

      cout << ans << endl;
   }

   return 0;
}