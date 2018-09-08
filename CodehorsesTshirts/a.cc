#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>

using namespace std;

int main() {

   int N;
   cin >> N;

   string s;
   int val = 0;
   map<string, int> index;

   int prev[20] = {0};
   int cur[20]  = {0};
   
   for (int i = 0; i < N; i++) {
      cin >> s;

      //-- if not in the indexer, insert it.
      if (index.find(s) == index.end()) {
	 index[s] = val++;
      }

      prev[index[s]]++;
   }

   for (int i = 0; i < N; i++) {
      cin >> s;

      //-- if not in the indexer, insert it.
      if (index.find(s) == index.end()) {
	 index[s] = val++;
      }

      cur[index[s]]++;
   }


   int total = 0;
   for (int i = 0; i < 20; i++) {
      total += abs( prev[i] - cur[i] );
   }

   cout << total/2 << endl;   

   return 0;
}
