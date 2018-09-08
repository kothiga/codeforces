#include <iostream>

using namespace std;

const int MAX = 100005;
int x[MAX];
int y[MAX];

int main() {

   int n;
   cin >> n;

   for (int i = 0; i < n; i++) {
      cin >> x[i];
   }

   if (n < 3) {
      cout << 0 << endl;
      return 0;
   }

   int t[3] = {-1, 0, 1};

   int best = n+5;
   
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {

	 int count = 0;

	 if (t[i] != 0) {
	    count++;
	 }

	 if (t[j] != 0) {
	    count++;
	 }
	 
	 y[0] = x[0] + t[j];
	 y[1] = x[1] + t[i];

	 int dif = y[1] - y[0];
	 bool good = true;
	 for (int k = 2; k < n; k++) {

	    if (x[k] - y[k-1] == dif) {
	       
	       y[k] = x[k];
	       
	    } else if (x[k]+1 - y[k-1] == dif) {

	       y[k] = x[k]+1;
	       count++;

	    } else if (x[k]-1 - y[k-1] == dif) {

	       y[k] = x[k]-1;
	       count++;

	    } else {
	       
	       good = false;
	       break;
	       
	    }
	 }

	 if (good) {
	    best = min(best, count);
	 }
      }
   }

   if (best == n+5) {
      cout << -1 << endl;
   } else {
      cout << best << endl;
   }
      
      
   return 0;
}
