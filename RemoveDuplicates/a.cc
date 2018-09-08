#include <iostream>
#include <vector>

using namespace std;

int main() {

   const int MAX_N = 55;
   const int MAX_V = 1005;
   
   int  a[MAX_N];
   bool v[MAX_V];

   for (int i = 0; i < MAX_V; i++)
      v[i] = true;


   
   int n;
   cin >> n;

   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   int count = 0;
   vector<int> val;
   
   for (int i = n-1; i >= 0; i--) {
      if (v[a[i]]) {
	 v[a[i]] = false;
	 count++;
	 val.push_back(a[i]);
      }
   }


   cout << count << endl;
   
   int len = val.size();
   for (int i = len-1; i >= 0; i--)
      cout << val[i] << " ";
   cout << endl;
   
   return 0;
}
