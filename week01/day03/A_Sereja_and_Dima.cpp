#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int a[n];

   for(size_t i = 0; i < n; i++) {
      cin >> a[i];
   }

   int i = 0;
   int j = n - 1;

   int sereja = 0;
   int dima   = 0;

   bool sereja_turn = true;

   while(i <= j) {
      if(sereja_turn) {
         sereja += max(a[i], a[j]);
      }
      else {
         dima += max(a[i], a[j]);
      }

      sereja_turn = !sereja_turn;

      if(a[i] > a[j]) {
         i++;
      }
      else {
         j--;
      }
   }

   cout << sereja << " " << dima;
}
