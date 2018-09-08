#include <iostream>

using namespace std;

int main() {

   long long ps[200005], temp, n, m, i=1, cur=0;
   
   cin >> n >> m >> temp;

   ps[1] = temp;

   while(i < n && cin >> temp) {
      ps[i+1] = temp + ps[i++];
   }

   i = -1;
   while (i++ < m && cin >> temp) {

      while (temp > ps[cur+1]) {
	 cur++;
      }
      
      cout << cur+1 << " " << temp - ps[cur] << endl;

   }

   return 0;
}
