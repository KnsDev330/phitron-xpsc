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
      string s, r = "";

      cin >> n >> s;

      for(int i = n - 1; i >= 0; i--) {
         int d;
         if(s[i] == '0') {
            d  = stoi(s.substr(i - 2, 2));
            i -= 2;
         }
         else {
            d = s[i] - '0';
         }

         d += 'a' - 1;
         r  = char(d) + r;
      }

      cout << r << endl;
   }

   return 0;
}