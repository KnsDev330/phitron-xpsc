#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   string s1, s2;
   set<string> st;
   while(n--) {
      cin >> s1 >> s2;
      st.insert(s1 + "," + s2);
   }

   cout << st.size();

   return 0;
}