#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   vector<string> v(n);
   unordered_map<string, bool> m;

   for(size_t i = 0; i < n; i++) {
      cin >> v[i];
   }

   for(int i = n - 1; i >= 0; i--) {
      if(m[v[i]]) continue;
      m[v[i]] = true;
      cout << v[i] << endl;
   }


   return 0;
}