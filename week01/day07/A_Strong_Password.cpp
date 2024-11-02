#include <bits/stdc++.h>
using namespace std;

char find_char(char left, char right) {
   for(size_t i = 'a'; i <= 'z'; i++) {
      if(i != left) {
         if(right == -1) {
            return i;
         }
         else {
            if(i != right) {
               return i;
            }
         }
      }
   }
   return -1;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      string s;
      cin >> s;

      bool inserted = false;
      if(s.size() == 1) {
         s.insert(1, 1, find_char(s[0], -1));
         inserted = true;
      }
      else {
         for(size_t i = 1; i < s.size(); i++) {
            if(s[i] == s[i - 1]) {
               s.insert(i, 1, find_char(s[i - 1], s[i]));
               inserted = true;
               break;
            }
         }
      }

      if(!inserted) {
         s.insert(0, 1, find_char(s[0], s[1]));
      }

      cout << s << endl;
   }

   return 0;
}