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


bool is_valid(int n, int m, int i, int j) {
   return i >= 0 && j >= 0 && i < n && j < m;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      int n, m;
      cin >> n >> m;

      int a[n][m];
      int s[n][m];
      int tt[n][m];

      for(size_t i = 0; i < n; i++) {
         for(size_t j = 0; j < m; j++) {
            cin >> a[i][j];
            s[i][j]  = a[i][j];
            tt[i][j] = a[i][j];
         }
      }

      for(size_t i = 0; i < n; i++) {
         int sum = 0;
         int x   = i;
         int y   = 0;
         while(is_valid(n, m, x, y)) {
            sum += a[x][y];
            x--;
            y++;
         }

         x = i;
         y = 0;
         while(is_valid(n, m, x, y)) {
            s[x][y] = sum;
            x--;
            y++;
         }
      }

      for(size_t j = 1; j < m; j++) {
         int sum = 0;
         int x   = n - 1;
         int y   = j;
         while(is_valid(n, m, x, y)) {
            sum += a[x][y];
            x--;
            y++;
         }

         x = n - 1;
         y = j;
         while(is_valid(n, m, x, y)) {
            s[x][y] = sum;
            x--;
            y++;
         }
      }


      for(int i = n - 1; i >= 0; i--) {
         int sum = 0;
         int x   = i;
         int y   = 0;
         while(is_valid(n, m, x, y)) {
            sum += a[x][y];
            x++;
            y++;
         }

         x = i;
         y = 0;
         while(is_valid(n, m, x, y)) {
            // cout << "x: " << n << " " << m << " " << x << " " << y << endl;
            tt[x][y] = sum;
            x++;
            y++;
         }
      }

      for(int j = 1; j < m; j++) {
         int sum = 0;
         int x   = 0;
         int y   = j;
         while(is_valid(n, m, x, y)) {
            sum += a[x][y];
            x++;
            y++;
         }

         x = 0;
         y = j;
         while(is_valid(n, m, x, y)) {
            tt[x][y] = sum;
            x++;
            y++;
         }
      }


      // for(size_t i = 0; i < n; i++) {
      //    for(size_t j = 0; j < m; j++) {
      //       cout << s[i][j] << " ";
      //    }

      //    cout << endl;
      // }

      // cout << endl;

      // for(size_t i = 0; i < n; i++) {
      //    for(size_t j = 0; j < m; j++) {
      //       cout << tt[i][j] << " ";
      //    }

      //    cout << endl;
      // }


      int mx = INT_MIN;
      for(size_t i = 0; i < n; i++) {
         for(size_t j = 0; j < m; j++) {
            mx = max(mx, s[i][j] + tt[i][j] - a[i][j]);
         }
      }

      cout << mx << endl;
   }

   return 0;
}