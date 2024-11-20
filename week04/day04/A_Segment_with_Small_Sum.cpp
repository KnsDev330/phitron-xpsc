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

   int n;
   ll sum;
   cin >> n >> sum;

   vi a(n);
   ina(a, n);

   ll s   = a[0];
   int l  = 0;
   int r  = 0;
   int ln = 0;

   if(s <= sum) ln++;


   while(true) {
      while(r + 1 < n && s + a[r + 1] <= sum) {
         r++;
         s  += a[r];
         ln  = max(ln, r - l + 1);
         // cout << "a: " << " " << l << " " << r << " " << s << endl;
         // cout << "b: " << " " << s << endl;
      }

      // cout << "x: " << " " << l << " " << r << endl;

      r++;
      if(r >= n) break;
      s += a[r];
      // cout << "c: " << " " << l << " " << r << " " << s << endl;
      // cout << "c: " << " " << s << endl;

      while(l < n && s > sum) {
         s -= a[l];
         l++;
         // cout << "d: " << " " << s << endl;
         if(s <= sum && l < n) {
            ln = max(ln, r - l + 1);
            // cout << "e: " << " " << l << " " << r << endl;
         }
      }
   }

   cout << ln << endl;


   return 0;
}