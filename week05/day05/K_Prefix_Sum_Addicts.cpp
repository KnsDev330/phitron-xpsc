#include <bits/stdc++.h>
// clang-format off
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
#define pyn(yes) cout << ((yes) ? "YES\n":"NO\n")
#define Pyn(yes) cout << ((yes) ? "Yes\n":"No\n")
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define vi vector<int>
#define vc vector<char>
#define vvi vector<vi>
#define vvc vector<vc>
#define vec vector
#define unm unordered_map
#define unii unordered_map<int, int>
#define unci unordered_map<char, int>
#define unsi unordered_map<string, int>
#define pii pair<int, int>
#define pci pair<char, int>
#define psi pair<string, int>
#define ina(a, n) for(int i=0; i<(n); ++i) cin >> (a)[i]
#define inaa(a, n, m) for(int i=0; i<(n); ++i) for(int j=0; j<(m); ++j) cin >> (a)[i][j]
#define pvc(v) for(auto x : (v)) cout << x << " "
#define pvvc(v) for(auto x : (v)) { for(auto y : x) { cout << y << " "; } cout << '\n'; }
// clang-format on
using namespace std;


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ll TEST_CASES;
   cin >> TEST_CASES;

   for(ll T = 1; T <= TEST_CASES; ++T) {
      ll n, k;
      cin >> n >> k;

      vector<ll> a(n);

      for(ll i = n - k; i < n; i++) {
         cin >> a[i];
      }

      if(k <= 1) {
         Yes;
         continue;
      }

      for(ll i = n - 1; i > n - k; i--) {
         a[i] = a[i] - a[i - 1];
      }

      ll last    = a[n - k + 1];
      ll sumLeft = a[n - k];
      // cout << "last:" << last << endl;

      for(ll i = n - k; i > 0; i--) {
         a[i]     = last;
         sumLeft -= a[i];
      }

      a[0] = sumLeft;

      // for(ll i = 0; i < n; i++) {
      //    cout << a[i] << " ";
      // }
      // cout << endl;

      bool yes = true;
      for(ll i = 1; i < n; i++) {
         if(a[i] < a[i - 1]) {
            yes = false;
            break;
         }
      }

      Pyn(yes);
   }

   return 0;
}