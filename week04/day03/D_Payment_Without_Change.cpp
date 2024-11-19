#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, a, b, n, s;

   cin >> t;

   while(t--) {
      cin >> a >> b >> n >> s;

      int x = a * n;

      int nUsed = min(s / n, a);
      int rem   = s - (nUsed * n);

      cout << (b >= rem ? "YES" : "NO") << endl;
   }
}