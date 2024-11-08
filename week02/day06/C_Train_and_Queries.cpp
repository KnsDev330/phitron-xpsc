#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void ina(int a[], int n) {
   for(int ixy = 0; ixy < n; ixy++)
      cin >> a[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      int n, q;
      cin >> n >> q;

      int x;
      map<int, vector<int>> m;
      for(size_t i = 0; i < n; i++) {
         cin >> x;
         m[x].push_back(i);
      }

      int u, v;
      while(q--) {
         cin >> u >> v;

         if(m[u].size() == 0 || m[v].size() == 0) {
            cout << "NO\n";
         }
         else {
            pyn(m[v].back() >= m[u].front());
         }
      }
   }

   return 0;
}