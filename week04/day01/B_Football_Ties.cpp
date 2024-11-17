#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, a, b;

   cin >> t;

   while(t--) {
      cin >> a >> b;

      int d1 = a % 3;
      int d2 = b % 3;

      cout << min(d1, d2) << endl;
   }
}
