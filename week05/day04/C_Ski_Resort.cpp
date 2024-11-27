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
      ll n, k, q;
      cin >> n >> k >> q;

      ll a[n];
      for(size_t i = 0; i < n; i++) {
         cin >> a[i];
      }

      ll c = 0;
      ll x = 0;

      for(size_t i = 0; i < n; i++) {
         if(a[i] > q) {
            if(x >= k) {
               c += ((x - k + 1) * (x - k + 2)) / 2;
            }
            x = 0;
            continue;
         }
         x++;
      }

      if(x >= k) {
         c += ((x - k + 1) * (x - k + 2)) / 2;
      }


      cout << c << endl;
   }

   return 0;
}
