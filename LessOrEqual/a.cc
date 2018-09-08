#include <iostream>
#include <algorithm>

using namespace std;

int main() {

   const int MAX = 200005;
   int num[MAX];

   int n, k;
   cin >> n >> k;

   for (int i = 0; i < n; i++) {
      cin >> num[i];
   }

   sort(num, num+n);

   if (k == 0) {

      if (num[k] == 1) {
	 cout << "-1" << endl;
      } else {
	 cout << num[k]-1 << endl;
      }
   } else if (num[k] == num[k-1]) {
      cout << "-1" << endl;
   } else {
      cout << num[k-1] << endl;
   }   

   return 0;
}

      
