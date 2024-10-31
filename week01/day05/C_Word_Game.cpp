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
      cin >> n;

      unordered_map<string, vector<int>> m;

      string s;

      for(size_t j = 0; j < 3; j++) {
         for(size_t i = 0; i < n; i++) {
            cin >> s;
            m[s].push_back(j);
         }
      }

      vector<int> r(3, 0);

      for(auto x:m){
         int sz= x.second.size();
         if(sz==1){
            r[x.second[0]] += 3;
         }
         if(sz==2){
            r[x.second[0]] += 1;
            r[x.second[1]] += 1;
         }
      }

      cout << r[0] << " " << r[1] << " " << r[2] << endl;
   }

   return 0;
}