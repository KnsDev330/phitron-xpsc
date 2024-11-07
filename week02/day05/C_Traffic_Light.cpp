#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void ina(int a[], int n) {
   for(int ixy = 0; ixy < n; ixy++)
      cin >> a[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      int n;
      char c;
      string s;

      cin >> n >> c >> s;

      if(c == 'g') {
         cout << 0 << endl;
         continue;
      }

      int firstG = -1;
      map<int, pair<int, int>> m;
      set<int> waitList;

      for(size_t i = 0; i < n; i++) {
         if(s[i] == c) {
            waitList.insert(i);
            m[i] = {-1, -1};
            if(firstG != -1) m[i].first = ((n - i) + firstG);
         }
         else if(s[i] == 'g') {
            if(firstG == -1) firstG = i;

            vector<int> rm;
            for(int x : waitList) {
               m[x].second = i - x;
               rm.push_back(x);
            }

            for(int x : rm)
               waitList.erase(x);
         }
      }

      int mx = INT_MIN;
      for(auto x : m) {
         if(x.second.second == -1) mx = max(x.second.first, mx);
         else mx = max(x.second.second, mx);
      }

      cout << mx << endl;
   }

   return 0;
}