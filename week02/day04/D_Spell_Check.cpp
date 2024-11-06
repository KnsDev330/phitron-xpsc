#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
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

      unordered_map<char, int> m;

      for(char x : s)
         m[x]++;

      pyn(m.size() == 5 && m['T'] == 1 && m['i'] == 1 && m['m'] == 1 && m['u'] == 1 && m['r'] == 1);
   }

   return 0;
}