#include<stdlib.h>
#include<time.h>
#include "headers/node.h"
#include "headers/graph.h"
#include <iostream>

int main() {
   srand(time(NULL));
   graph g;
   node n;
   node m;
   g.add_node(n);
   g.add_node(n);
   g.add_node(m);
   g.add_edge(n, m);
}
