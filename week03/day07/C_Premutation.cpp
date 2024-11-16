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
      cin >> n;

      map<int, int> a[n - 1];
      int r[n] = {0};

      int x;
      for(size_t i = 0; i < n; i++) {
         for(size_t j = 0; j < n - 1; j++) {
            cin >> x;
            a[j][x]++;
         }
      }

      int xx = 0, yy = n - 1;
      int count = n - 1;
      while(xx < n / 2) {
         for(auto mp : a[xx]) {
            if(mp.second == count) {
               r[xx] = mp.first;
               break;
            }
         }
         for(auto mp : a[n - 2 - xx]) {
            if(mp.second == count) {
               r[n - 1 - xx] = mp.first;
               break;
            }
         }
         xx++;
         count--;
      }

      int lll = n / 2;
      if(n % 2 == 0) lll--;
      auto it = a[lll - 1].begin();
      int num = it->first;
      int cnt = it->second;
      it++;
      if(it->second < cnt) num = it->first;
      r[lll] = num;

      if(n % 2 == 0) {
         int rrr = n / 2;
         it      = a[rrr].begin();
         num     = it->first;
         cnt     = it->second;
         it++;
         if(it->second < cnt) num = it->first;
         r[rrr] = num;
      }

      for(int num : r) {
         cout << num << " ";
      }

      cout << endl;
   }

   return 0;
}