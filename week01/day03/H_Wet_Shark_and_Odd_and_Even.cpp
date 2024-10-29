#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, x;

   cin >> n;

   long long sum = 0;
   int min_odd   = INT_MAX;

   for(size_t i = 0; i < n; i++) {
      cin >> x;

      sum += x;
      if(x % 2 == 1) {
         min_odd = min(min_odd, x);
      }
   }

   if(sum % 2 == 1) sum -= min_odd;

   cout << sum;
}
