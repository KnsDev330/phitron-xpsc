#include <bits/stdc++.h>
// clang-format off
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
#define ina(a, n) for(int i = 0; i < (n); ++i) cin >> (a)[i]
#define pyn(yes) cout << ((yes) ? "YES\n":"NO\n")
#define Pyn(yes) cout << ((yes) ? "Yes\n":"No\n")
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define pvc(v) for(int x : (v)) cout << x << " "
// clang-format on
using namespace std;


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      int L;
      cin >> L;

      int n = (L * (L - 1)) / 2;

      int a[n];
      ina(a, n);

      map<int, int> m;
      for(size_t i = 0; i < n; i++) {
         m[a[i]]++;
      }

      vector<pair<int, int>> v;
      for(auto mp : m) {
         v.push_back({mp.first, mp.second});
      }

      // cout << v.size() << endl;
      // continue;

      sort(v.begin(), v.end());

      int x = L - 1;
      int i = 0;
      vector<int> rr;
      // cout << L << endl;
      // continue;

      while(true) {
         rr.push_back(v[i].first);
         v[i].second -= x;
         x--;

         if(v[i].second <= 0) i++;
         if(i >= v.size() || x <= 0) break;
      }

      for(size_t i = 0; i < rr.size(); i++) {
         cout << rr[i] << " ";
      }

      cout << rr.back() << endl;

      // cout << L << endl;
   }

   return 0;
}