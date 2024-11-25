#include <bits/stdc++.h>
using namespace std;

int getIdx(int times, int mp[]) {
   for(int i = 0; i < 26; i++) {
      if(mp[i] == times) return i;
   }
   return -1;
}

int main() {
   int t;
   cin >> t;

   while(t--) {
      int n;
      cin >> n;

      int a[n];

      for(int i = 0; i < n; i++)
         cin >> a[i];

      int idx    = 0;
      int mp[26] = {0};

      for(int i = 0; i < n; i++) {
         int x  = a[i];
         int id = getIdx(x, mp);
         if(idx == -1) {
            cout << "ERROR";
            return 1;
         }
         cout << char('a' + id);
         mp[id]++;
      }

      cout << endl;
   }
}