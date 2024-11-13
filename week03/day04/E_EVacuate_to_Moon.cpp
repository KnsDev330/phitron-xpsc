#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void YES() {
   cout << "YES\n";
}
void NO() {
   cout << "NO\n";
}
void ina(ll a[], ll n) {
   for(ll ixy = 0; ixy < n; ixy++)
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
      ll n, m, h;
      cin >> n >> m >> h;

      ll a[n], b[m];
      ina(a, n);
      ina(b, m);
      sort(a, a + n, greater<ll>());
      sort(b, b + m, greater<ll>());

      for(size_t i = 0; i < m; i++) {
         b[i] = b[i] * h;
      }

      ll mx = 0;

      for(size_t i = 0; i < min(n, m); i++) {
         mx += min(a[i], b[i]);
      }

      cout << mx << endl;
   }

   return 0;
}