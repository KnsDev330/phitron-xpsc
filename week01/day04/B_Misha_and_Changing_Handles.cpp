#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   string s1, s2;
   unordered_map<string, string> m;
   unordered_map<string, string> k;

   while(n--) {
      cin >> s1 >> s2;

      k[s2]     = s1;
      auto f1   = k.find(s2);
      auto last = f1;
      while(f1 != k.end()) {
         last = f1;
         f1   = k.find(f1->second);
      }
      // m[f1->second] = s2;
      // cout << last->second << endl;
      m[last->second] = s2;
   }


   cout << m.size() << endl;
   for(auto &[first, second] : m) {
      cout << first << " " << second << endl;
   }

   return 0;
}