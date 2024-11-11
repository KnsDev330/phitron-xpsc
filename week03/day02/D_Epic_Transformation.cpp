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

      int a;
      map<int, int> m;

      for(size_t i = 0; i < n; i++) {
         cin >> a;
         m[a]++;
      }

      priority_queue<int> pq;
      for(auto x : m)
         pq.push(x.second);

      while(pq.size() > 1) {
         auto x = pq.top();
         pq.pop();
         auto y = pq.top();
         pq.pop();
         if(--x) pq.push(x);
         if(--y) pq.push(y);
      }

      cout << (pq.size() ? pq.top() : 0) << endl;
   }

   return 0;
}

// 3 2; 4 5 4 5 4
