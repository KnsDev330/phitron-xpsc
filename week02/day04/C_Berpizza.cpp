#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void ina(int a[], int n) {
   for(int ixy = 0; ixy < n; ixy++)
      cin >> a[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


class cmp {
   public:
      bool operator()(pair<int, int> a, pair<int, int> b) {
         if(a.first < b.first) return true;
         if(a.first > b.first) return false;
         return a.second > b.second;
      }
};

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, x;
   cin >> n;

   priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
   priority_queue<int, vector<int>, greater<int>> pq2;
   unordered_map<int, bool> sr;
   int serial = 0;

   for(size_t i = 0; i < n; i++) {
      cin >> x;
      if(x == 1) {
         int y;
         cin >> y;
         pq.push({y, ++serial});
         pq2.push(serial);
      }
      else if(x == 2) {
         int top = pq2.top();
         pq2.pop();
         while(sr[top] && pq2.size()) {
            top = pq2.top();
            pq2.pop();
         }

         sr[top] = true;
         cout << top << " ";
      }
      else {
         auto top = pq.top();
         pq.pop();

         while(sr[top.second] && pq.size()) {
            top = pq.top();
            pq.pop();
         }

         sr[top.second] = true;
         cout << top.second << " ";
      }
   }

   // while(pq.size()) {
   //    cout << pq.top().first << " " << pq.top().second << endl;
   //    pq.pop();
   // }


   return 0;
}