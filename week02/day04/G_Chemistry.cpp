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
      int n, k;
      string s;

      cin >> n >> k;
      cin >> s;

      if(k > n) {
         cout << "NO\n";
         continue;
      }

      int ones = 0, odds = 0, evens = 0;
      unordered_map<char, int> m;

      for(char c : s)
         m[c]++;

      for(auto x : m) {
         if(x.second == 1) ones++;
         else if(x.second % 2 == 0) evens++;
         else odds++;
      }

      int mn  = min(ones, k);
      ones   -= mn;
      k      -= mn;
      if(ones > 1) {
         cout << "NO\n";
         continue;
      }

      mn    = min(odds, k);
      odds -= mn;
      k    -= mn;
      if(ones + odds > 1) {
         cout << "NO\n";
         continue;
      }

      cout << "YES\n";
   }

   return 0;
}