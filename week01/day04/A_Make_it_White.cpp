#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      int a;
      string s;
      cin >> a >> s;

      int f_location = -1, l_location = -1;

      for(size_t i = 0; i < a; i++) {
         if(s[i] == 'B') {
            if(f_location == -1) {
               f_location = i;
            }
            l_location = i;
         }
      }

      cout << l_location - f_location + 1 << endl;
   }

   return 0;
}