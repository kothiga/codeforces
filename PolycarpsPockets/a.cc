#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
   
   int n, input;
   cin >> n;

   const int MAX = 105;
   int count[MAX] = {0};
   
   for (int i = 0; i < n; i++) {
      cin >> input;
      count[input]++;
   }
   
   int total = 0;
   for (int i = 0; i < MAX; i++) {
      if (count[i] > total) {
	 total = count[i];
      }
   }
   
   cout << total << endl;
      
   return 0;
}
