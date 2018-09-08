#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

   int N; cin >> N;

   string s; cin >> s;
   
   for (int i = 0; i < N; i++) {

      if ( (N % (i+1)) == 0) {
	 //cout << s << endl;
	 reverse(s.begin(), s.begin()+(i+1));
	 //cout << s << endl << endl;
      }
   }

   cout << s << endl;

   return 0;
}
