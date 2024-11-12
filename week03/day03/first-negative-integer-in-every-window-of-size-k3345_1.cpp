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
void pvc(vector<int>& v) {
   for(int x : v)
      cout << x << " ";
}


vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
   queue<int> q;
   vector<int> v;

   for(int i = 0; i < k; i++) {
      if(arr[i] < 0) q.push(i);
   }

   if(q.size()) {
      v.push_back(arr[q.front()]);
      if(q.front() == 0) q.pop();
   }
   else {
      v.push_back(0);
   }

   for(int i = k; i < arr.size(); i++) {
      if(arr[i] < 0) {
         q.push(i);
      }
      if(q.size()) {
         v.push_back(arr[q.front()]);
      }
      else {
         v.push_back(0);
      }
      if(q.size() && q.front() <= i - k + 1) {
         q.pop();
      }
   }

   return v;
}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, k;
   cin >> n >> k;
   vector<int> arr(n);

   for(size_t i = 0; i < n; i++) {
      cin >> arr[i];
   }

   auto xx = FirstNegativeInteger(arr, k);
   for(int x : xx) {
      cout << x << " ";
   }

   return 0;
}