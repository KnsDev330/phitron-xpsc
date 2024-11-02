#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      int n;
      string s, r = "";

      cin >> n >> s;

      bool a[26] = {false};
      for(char c : s)
         a[c - 'a'] = true;

      for(size_t i = 0; i < 26; i++)
         if(a[i]) r += char('a' + i);

      unordered_map<char, char> mp;
      for(int i = 0, j = r.size() - 1; i <= j; i++, j--) {
         mp[char(r[i])] = char(r[j]);
         mp[char(r[j])] = char(r[i]);
      }

      string b = s;
      for(size_t i = 0; i < n; i++)
         b[i] = mp[s[i]];

      cout << b << endl;
   }

   return 0;
}