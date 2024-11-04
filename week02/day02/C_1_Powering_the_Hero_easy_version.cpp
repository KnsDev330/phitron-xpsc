#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ll t;
   cin >> t;

   while(t--) {
      ll n;
      cin >> n;

      priority_queue<ll> pq;

      ll x, r = 0;
      for(size_t i = 0; i < n; i++) {
         cin >> x;

         if(x == 0) {
            if(pq.size()) {
               r += pq.top();
               pq.pop();
            }
         }
         else {
            pq.push(x);
         }
      }

      cout << r << endl;
   }

   return 0;
}
