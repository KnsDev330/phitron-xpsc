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
      int n, x, c = 0;
      ll s   = 0;
      bool h = false;

      cin >> n;

      for(size_t i = 0; i < n; i++) {
         cin >> x;
         s += abs(x);

         if(x > 0) {
            if(h) {
               c++;
            }
            h = false;
         }
         else if(x < 0) {
            h = true;
         }
      }

      if(h) c++;

      cout << s << " " << c << endl;
   }

   return 0;
}