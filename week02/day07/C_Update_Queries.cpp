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
      int n, m;
      string s, d;

      cin >> n >> m >> s;

      vector<int> v(m);

      for(size_t i = 0; i < m; i++) {
         cin >> v[i];
      }

      cin >> d;

      sort(v.begin(), v.end());
      sort(d.begin(), d.end());

      // pvc(v);
      // cout << s << " " << d << endl << endl;


      int l = 0;
      int r = m - 1;

      for(size_t i = 0; i < m; i++) {
         int idx = v[i];
         if(i == m - 1) {
            s[idx - 1] = d[r];
         }
         else {
            if(idx == v[i + 1]) {
               s[idx - 1] = d[r];
               r--;
            }
            else {
               s[idx - 1] = d[l];
               l++;
            }
         }
      }

      cout << s << endl;
   }

   return 0;
}