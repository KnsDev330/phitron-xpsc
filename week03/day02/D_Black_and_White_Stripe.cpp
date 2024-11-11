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
      int n, k;
      string s;

      cin >> n >> k >> s;

      int mn     = INT_MAX;
      int whites = 0;

      for(size_t i = 0; i < k; i++) {
         if(s[i] == 'W') whites++;
      }

      mn = whites;
      if(whites == 0) {
         cout << 0 << endl;
         continue;
      }

      for(size_t i = k; i < n; i++) {
         if(s[i - k] == 'W') whites--;
         if(s[i] == 'W') whites++;
         mn = min(mn, whites);
      }

      cout << mn << endl;
   }

   return 0;
}