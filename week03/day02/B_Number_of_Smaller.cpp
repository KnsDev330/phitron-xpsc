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

   int m, n;
   cin >> m >> n;

   int a[m], b[n];

   for(size_t i = 0; i < m; i++)
      cin >> a[i];

   for(size_t i = 0; i < n; i++)
      cin >> b[i];

   int c = 0;
   int i = 0;
   int j = 0;

   while(i < m && a[i] < b[j]) {
      c++;
      i++;
   }

   // cout << endl << "ii:" << i << " " << c << endl;


   for(; j < n; j++) {
      // cout << endl << "i:" << i << " " << a[i] << " " << b[j] << endl;
      while(i < m && a[i] < b[j]) {
         c++;
         i++;
      }
      cout << c << " ";
   }

   return 0;
}