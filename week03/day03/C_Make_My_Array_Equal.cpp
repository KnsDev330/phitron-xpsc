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

   ll T;
   cin >> T;

   while(T--) {
      ll n, x, last = -1;
      cin >> n;

      bool f = true;

      for(ll i = 0; i < n; i++) {
         cin >> x;

         if(x == 0) continue;

         if(last == -1) last = x;
         else if(x != last) {
            f = false;
         }
      }

      pyn(f);
   }

   return 0;
}