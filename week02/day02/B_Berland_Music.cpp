#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
      int n;
      cin >> n;

      int a[n];

      for(size_t i = 0; i < n; i++) {
         cin >> a[i];
      }

      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> sq;
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> bq;

      string s;
      cin >> s;

      for(size_t i = 0; i < n; i++) {
         if(s[i] == '0') sq.push({a[i], i});
         else bq.push({a[i], i});
      }

      size_t i = 0;
      while(sq.size()) {
         a[sq.top().second] = i + 1;
         sq.pop();
         i++;
      }

      while(bq.size()) {
         a[bq.top().second] = i + 1;
         bq.pop();
         i++;
      }

      for(int x : a) {
         cout << x << " ";
      }

      cout << endl;
   }

   return 0;
}