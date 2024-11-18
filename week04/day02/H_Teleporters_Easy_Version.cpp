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
      int n, k;
      cin >> n >> k;

      int a[n];
      ina(a, n);

      for(size_t i = 0; i < n; i++) {
         a[i] = a[i] + i + 1;
      }

      sort(a, a + n);
      int sum = 0;

      int i = 0;
      for(; (i < n && sum <= k); i++) {
         sum += a[i];
      }

      if(sum > k) i--;

      cout << i << endl;
   }

   return 0;
}