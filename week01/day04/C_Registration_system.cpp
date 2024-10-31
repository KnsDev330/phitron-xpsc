#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   unordered_map<string, int> m;
   string s;

   while(t--) {
      cin >> s;


      if(m[s] > 0) {
         cout << s << m[s]++;
      }
      else {
         m[s] = 1;
         cout << "OK";
      }
      cout << endl;
   }

   return 0;
}