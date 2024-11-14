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

   int n, m;
   cin >> n >> m;

   int a[n], b[m], c[n + m];
   ina(a, n);
   ina(b, m);

   int i = 0;
   int j = 0;
   int x = 0;

   for(; x < n + m; x++) {
      if(i < n && j < m) {
         if(a[i] <= b[j]) {
            c[x] = a[i];
            i++;
         }
         else {
            c[x] = b[j];
            j++;
         }
      }
      else break;
   }

   while(i < n) {
      c[x] = a[i];
      i++;
      x++;
   }

   while(j < m) {
      c[x] = b[j];
      j++;
      x++;
   }

   for(int i = 0; i < n + m; i++) {
      cout << c[i] << " ";
   }


   return 0;
}