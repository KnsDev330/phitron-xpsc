#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, c;
   cin >> a >> b >> c;

   int mnm = max(a / c, 1);

   int r = mnm * c;
   for(size_t i = mnm; r <= b; i++) {
      if(r >= a && r <= b) {
         cout << r;
         return 0;
      }
      r *= i;
   }

   cout << -1;
}