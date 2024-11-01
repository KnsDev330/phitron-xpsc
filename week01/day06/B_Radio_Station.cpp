#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, m;
   cin >> n >> m;

   string name, ip, cmd;
   unordered_map<string, string> mp;

   for(size_t i = 0; i < n; i++) {
      cin >> name >> ip;
      mp[ip + ";"] = name;
   }

   for(size_t i = 0; i < m; i++) {
      cin >> cmd >> ip;
      cout << cmd << " " << ip << " #" << mp[ip] << endl;
   }

   return 0;
}