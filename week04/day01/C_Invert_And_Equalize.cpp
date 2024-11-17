#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, n;
   string s;

   cin >> t;

   while(t--) {
      cin >> n >> s;

      int ones = 0, os = 0;
      bool a = false, b = false;

      for(size_t i = 0; i < s.size(); i++) {
         if(s[i] == '0') {
            if(a) continue;
            a = true;
            ones++;
         }
         else {
            a = false;
         }
      }

      for(size_t i = 0; i < s.size(); i++) {
         if(s[i] == '1') {
            if(b) continue;
            b = true;
            os++;
         }
         else {
            b = false;
         }
      }

      cout << min(ones, os) << endl;
   }
}
