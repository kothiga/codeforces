#include <iostream>

using namespace std;

int main() {

   const int MAX = 200005;
   long long a[MAX], ps[MAX], temp;
   
   int n, m;
   cin >> n >> m;

   cin >> a[0];
   ps[0] = 0;
   ps[1] = a[0];

   for (int i = 1; i < n; i++) {
      cin >> a[i];
      ps[i+1] = a[i] + ps[i];
   } 


   int cur = 0;
   for (int i = 0; i < m; i++) {
      cin >> temp;

      while (temp > ps[cur+1]) {
	 cur++;
      }
      
      cout << cur+1 << " " << temp - ps[cur] << endl;

   }

   return 0;
}
