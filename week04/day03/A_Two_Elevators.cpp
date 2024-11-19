#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;

   cin >> t;

   while(t--) {
      int a, b, c;
      cin >> a >> b >> c;

      int f = a - 1;
      int s;

      if(b >= c) {
         s = b - 1;
      }
      else {
         s = c - b + c - 1;
      }

      if(f == s) cout << 3;
      else if(f < s) cout << 1;
      else cout << 2;

      cout << endl;
   }
}