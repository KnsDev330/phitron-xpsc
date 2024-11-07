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

      int a[n];
      ina(a, n);

      int iii;
      string s;
      for(size_t i = 0; i < n; i++) {
         cin >> iii >> s;

         for(size_t j = 0; j < s.size(); j++) {
            if(s[j] == 'D') a[i]++;
            else a[i]--;

            if(a[i] == -1) a[i] = 9;
            else if(a[i] == 10) a[i] = 0;
         }

         cout << a[i] << " ";
      }

      cout << endl;
   }

   return 0;
}