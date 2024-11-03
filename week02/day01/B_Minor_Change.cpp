#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   string s, t;
   cin >> s >> t;

   int c = 0;

   for(size_t i = 0; i < s.size(); i++) {
      if(s[i] != t[i]) c++;
   }

   cout << c;

   return 0;
}