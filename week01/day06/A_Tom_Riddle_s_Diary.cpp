#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   string s;
   unordered_map<string, bool> m;

   for(size_t i = 0; i < n; i++) {
      cin >> s;
      if(m[s]) {
         cout << "YES\n";
      }
      else {
         cout << "NO\n";
         m[s] = true;
      }
   }

   return 0;
}