#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      int n;
      cin >> n;

      string a, b;
      cin >> a >> b;

      bool fl = true;

      for(size_t i = 0; i < a.size(); i++) {
         if((a[i] == 'R' && b[i] != 'R') || (a[i] != 'R' && b[i] == 'R')) {
            fl = false;
            break;
         }
      }

      cout << (fl ? "YES\n" : "NO\n");
   }

   return 0;
}