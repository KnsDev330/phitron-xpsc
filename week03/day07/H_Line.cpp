#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void YES() {
   cout << "YES\n";
}
void NO() {
   cout << "NO\n";
}
void ina(int a[], int n) {
   for(int ixy = 0; ixy < n; ixy++)
      cin >> a[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


int getCount(int length, char c, int index) {
   if(c == 'L') return index - 0;
   return length - index - 1;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      ll n;
      string s;

      cin >> n >> s;

      ll count = 0;
      for(size_t k = 0; k < n; k++) {
         count += getCount(n, s[k], k);
      }

      ll i    = 0;
      ll j    = n - 1;
      ll iMax = n / 2;
      ll jMax = (n - 1) / 2;

      while(i < iMax && s[i] == 'R')
         i++;
      while(j > jMax && s[j] == 'L')
         j--;


      for(size_t kk = 0; kk < n; kk++) {
         if(i == iMax && j == jMax) {
            cout << count << " ";
            continue;
         }

         char d = 'n';
         if(i == iMax && j != jMax) d = 'j';
         else if(i != iMax && j == jMax) d = 'i';
         else d = (i - 0) < (n - 1 - j) ? 'i' : 'j';

         if(d == 'i') {
            count -= getCount(n, 'L', i);
            count += getCount(n, 'R', i);
            s[i]   = 'R';
            while(i < iMax && s[i] == 'R')
               i++;
         }
         else if(d == 'j') {
            count -= getCount(n, 'R', j);
            count += getCount(n, 'L', j);
            s[j]   = 'L';
            while(j > jMax && s[j] == 'L')
               j--;
         }

         cout << count << " ";
      }


      cout << endl;
   }

   return 0;
}