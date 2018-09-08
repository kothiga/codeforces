#include <iostream>

using namespace std;

const int MAX = 105;
char s[MAX];

int main() {

   int n;
   cin >> n;
   
   for (int i = 0; i < n; i++) {
      cin >> s[i];
   }

   int best_index = 0;
   int best_count = -1;

   int cur_index = 0;
   int cur_count = 0;
   
   for (int i = 0; i < n-1; i++) {

      cur_index = i;
      cur_count = 0;
      
      for (int j = 0; j < n-1; j++) {

	 if (s[cur_index] == s[j] && s[cur_index+1] == s[j+1]) {
	    cur_count++;
	 }

      }

      //cout << s[cur_index] << s[cur_index+1] << ": " << cur_count;
      
      if (cur_count > best_count) {

	 //cout << " <-- New Best";
	 
	 best_index = cur_index;
	 best_count = cur_count;
      }

      //cout << endl;

   }

   cout << s[best_index] << s[best_index+1] << endl;

   return 0;
}
