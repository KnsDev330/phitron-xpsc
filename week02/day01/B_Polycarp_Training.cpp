#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   int a[n + 1];
   a[0] = -1;

   for(size_t i = 0; i < n; i++)
      cin >> a[i + 1];

   sort(a, a + n + 1);

   int c = 0;
   int d = 1;

   for(size_t i = 1; i <= n; i++) {
      if(a[i] >= d) {
         d++;
         c++;
      }
   }

   cout << c;

   return 0;
}