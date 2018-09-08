#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#include <queue>

using namespace std;

struct Edge {
   int to;     
   Edge(int t) : to(t) { }
};

typedef vector<Edge>::iterator EdgeIter;

struct Graph {
   vector<Edge> *nbr;
   int num_nodes;
   
   Graph(int n) : num_nodes(n) {
      nbr = new vector<Edge>[num_nodes];
   }

   ~Graph() { delete[] nbr; }

   void add_edge(int u, int v) {
      nbr[u].push_back(Edge(v));
   }
};

struct pos {
   int node, life;
   vector<int> path;
};

int main() {

   int n;
   cin >> n;

   const int MAX = 105;
   long long num[MAX];
   int numCount[MAX];

   for (int i = 0; i < n; i++) {
      cin >> num[i];
   }

   Graph g(n);
   long long a, b;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
	 if (i == j) { continue; }

	 a = num[i];
	 b = num[j];

	 if (a * 2 == b ||
	     (a % 3 == 0 && a / 3 == b)) {
	    g.add_edge(i, j);
	    numCount[j]++;
	 }
      }
   }

   //-- search
   pos sol;
   for (int i = 0; i < n; i++) {
      if (numCount[i] == 0) {

	 queue<pos> bfs;

	 pos start;
	 start.node = i;
	 start.path.push_back(i);

	 bfs.push(start);

	 while (!bfs.empty()) {

	    pos cur = bfs.front(); bfs.pop();

	    int index = cur.node;

	    int len = g.nbr[index].size();

	    if (len == 0) {
	       sol = cur;
	       break;
	    }
	    
	    for (int j = 0; j < len; j++) {

	       pos temp = cur;
	       temp.node = g.nbr[index][j].to;
	       temp.path.push_back(temp.node);

	       bfs.push(temp);	       
	    }
	 }	 

	 break;
      }
   }
      
   for (unsigned int i = 0; i < sol.path.size(); i++) {
      if (i) cout << " ";
      cout << sol.path[i];
   } cout << endl;


   return 0;
}
   
   
   
