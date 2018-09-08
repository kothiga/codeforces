#include <iostream>
#include <string>

using namespace std;

int get_dif(string s) {

   int len = s.length()-1;
   int total = 0;
   for (int i = 0; i < len; i++) {
      if (s[i] != s[i+1])
	 total++;
   }
   return total;
}

int main() {

   int a, b, x, m;
   cin >> a >> b >> x;

   int cur;
   if (b > a) {
      cur = 0;
   } else {
      cur = 1;
   }

   string s = "";

   
   s += char(cur + '0');
   
     
   
   
   cout << s << endl;

   return 0;
}
