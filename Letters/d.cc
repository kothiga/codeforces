#include <iostream>

using namespace std;

int main() {

   long long ps[200005], temp, n, m, i=1, cur=0;
   
   cin >> n >> m >> ps[1];

   while( (i < n && cin >> temp) ? (ps[i+1] = temp + ps[i++]) : 0 ) { }

   while (cin >> temp) {

      while ( (temp > ps[cur+1]) ? cur++ : 0 ) { }
      
      cout << cur+1 << " " << temp - ps[cur] << endl;

   }

   return 0;
}
