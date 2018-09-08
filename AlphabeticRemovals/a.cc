#include <iostream>
#include <string>

using namespace std;

int main() {

   int counter[27] = {0};
   int to_delete[27] = {0};
   
   int N, K;
   cin >> N >> K;
   
   string s; cin >> s;

   for (int i = 0; i < N; i++) {
      counter[(int)(s[i]-'a')]++;
   }

   int pos = 0;
   
   while(K > 0) {

      if (counter[pos] > K) {
	 to_delete[pos] += K;
	 K = 0;
      } else {
	 to_delete[pos] += counter[pos];
	 K -= counter[pos];
      }
      
      pos++;
   }

   for (int i = 0; i < N; i++) {

      if (to_delete[(int)(s[i]-'a')] > 0) {
	 to_delete[(int)(s[i]-'a')]--;
      } else {
	 cout << s[i];
      }
   }
   cout << endl;      

   return 0;
}
