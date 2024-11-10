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
      int n;
      string s;
      cin >> n >> s;

      int l = 0;
      int r = n - 1;

      while((l < r) && ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))) {
         l++;
         r--;
      }

      cout << r - l + 1 << endl;
   }

   return 0;
}