#include <iostream>
#include <iomanip>

using namespace std;

struct frac {
   long long n, d;
   frac(long long num, long long den) : n(num), d(den) {}
   bool operator < (frac x) const {
      return n*x.d < d*x.n;
   }
};

int main() {

   const int MAX = 5005;
   long long ps[MAX] = {0};

   int n, k;
   cin >> n >> k;

   long long input;
   for (int i = 1; i <= n; i++) {
      cin >> input;
      ps[i] = ps[i-1] + input;
   }


   frac best(0,1);
  
   for (int i = 0; i <= n; i++) {
      for (int j = i+1; j <= n; j++) {

	 if (j - i >= k) {
	    frac cur(ps[j]-ps[i], j-i);

	    if (best < cur) {
	       best = cur;
	    }
	 }

      }
   }

   cout << fixed << setprecision(15) << (double)best.n / (double)best.d << endl;
   
   
   return 0;
}
