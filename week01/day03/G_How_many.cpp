#include <bits/stdc++.h>
using namespace std;

int main() {
   int s, t;
   cin >> s >> t;

   int r = 0;
   for(size_t i = 0; i < 101; i++) {
      for(size_t j = 0; j < 101; j++) {
         for(size_t k = 0; k < 101; k++) {
            if(i + j + k > s) break;
            if(i * j * k > t) break;
            r++;
         }
      }
   }

   cout << r;
}
