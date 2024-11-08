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
      cin >> n;

      if(n == 1) {
         cout << 1 << endl;
         continue;
      }

      int a[n];
      for(size_t i = 0; i < n; i++)
         a[i] = i + 1;

      int r;
      vector<pair<int, int>> v;
      for(int i = n - 1; i >= 0; i--) {
         if(i == 1) {
            v.push_back({a[1], a[0]});
            r = (ceil((a[0] + a[1]) / 2.0));
            break;
         }

         int cp = a[i] % 2;
         int j  = i - 1;
         while(j >= 0 && a[j] % 2 != cp)
            j--;

         v.push_back({a[j], a[i]});
         a[j] = ceil((a[j] + a[i]) / 2);
      }

      cout << r << endl;
      for(auto x : v) {
         cout << x.first << " " << x.second << endl;
      }
   }

   return 0;
}