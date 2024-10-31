#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      string s;
      cin >> s;

      vector<int> lowers;
      vector<int> uppers;

      for(size_t i = 0; i < s.size(); i++) {
         if(s[i] == 'b') {
            s[i] = '0';
            if(!lowers.empty()) {
               s[lowers.back()] = '0';
               lowers.pop_back();
            }
         }
         else if(s[i] == 'B') {
            s[i] = '0';
            if(!uppers.empty()) {
               s[uppers.back()] = '0';
               uppers.pop_back();
            }
         }
         else {
            if(isupper(s[i])) uppers.push_back(i);
            else lowers.push_back(i);
         }
      }

      string r;
      for(char x : s) {
         if(x != '0') r += x;
      }
      cout << r << endl;
   }

   return 0;
}