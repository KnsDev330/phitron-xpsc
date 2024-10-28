#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;

   cin >> s;
   bool a[200] = {false};

   for(char c : s) {
      a[c] = 1;
   }

   for(size_t i = 'a'; i <= 'z'; i++) {
      if(!a[i]) {
         cout << char(i);
         return 0;
      }
   }

   cout << "None";
}
