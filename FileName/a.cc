#include <iostream>

using namespace std;

int main() {

   char c;
   int count = 0, cur = 0, n;

   cin >> n;

   for (int i = 0; i < n; i++) {

      cin >> c;

      
      /*
	// Scrub Version.
      if (c == 'x') {

	 cur++;
	 
	 if (cur >= 3) {
	    count++;
	 }

      } else {

	 cur = 0;

	 }
      */
   }
   
   cout << count << endl;
   
   return 0;
}
