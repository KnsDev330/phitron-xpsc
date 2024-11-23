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

   int TEST_CASES;
   cin >> TEST_CASES;

   for(int T = 1; T <= TEST_CASES; ++T) {
      ll n;
      string s;

      cin >> n;

      ll sum = 0;
      ll a[n];
      ll ps[n];

      for(size_t i = 0; i < n; i++) {
         cin >> a[i];
      }
      cin >> s;
      ps[0] = a[0];
      for(size_t i = 1; i < n; i++) {
         ps[i] = ps[i - 1] + a[i];
      }

      // for(int x : ps)
      //    cout << x << endl;

      int l = 0, r = n - 1;

      while(l < r) {
         while(l < r && s[l] == 'R') {
            l++;
         }
         while(l < r && s[r] == 'L') {
            r--;
         }
         if(l < r) {
            // cout << sum << endl;
            sum += (l == 0 ? ps[r] : (ps[r] - ps[l - 1]));
            l++;
            r--;
         }
      }

      cout << sum << endl;
   }

   return 0;
}