#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int TEST_CASES;
   cin >> TEST_CASES;

   for(int T = 1; T <= TEST_CASES; ++T) {
      int n, k;
      string s;

      cin >> n >> k >> s;

      vector<int> a;
      for(int i = 0; i < n; i++) {
         if(s[i] == '1') {
            a.push_back(i);
         }
      }

      int ans = 0;
      if(a.size() == 0) {
         for(int i = 0; i < n; i += k + 1) {
            ans++;
         }
         cout << ans << endl;
         continue;
      }


      int l  = a[0] == 0 ? 0 : -k - 1;
      int r  = a[0];
      int ri = 0;
      if(l == 0) {
         if(a.size() > 1) r = a[1];
         else r = n + k + 1;
      }

      for(int i = 0; i < n; i++) {
         if(i >= r) {
            if(++ri < a.size()) {
               r = a[ri];
            }
            else {
               r = n + k + 1;
            }
         }
         if(s[i] == '1') {
            l = i;
         }
         if(s[i] == '1' || i - l <= k || r - i <= k) continue;

         ans++;
         l = i;

         if(i >= r) {
            if(++ri < a.size()) {
               r = a[ri];
            }
            else {
               r = n + k + 1;
            }
         }
      }


      cout << ans << endl;
   }

   return 0;
}