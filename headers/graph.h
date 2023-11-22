#include<vector>
#include <map>

class graph {
   private:
      //std::vector<node> nodes;
      std::map<std::string, node> nodes;

   public:
      graph(); // constructor

      /*
       * Adds a node to the graph. Nodes must be unique -- i.e. the same node cannot be added to a graph more than once.
       * node -- the node to be added
       */
      bool add_node(const node& n); 

      //std::vector<node> get_nodes(); // getter for nodes vector
      std::map<std::string, node> get_nodes();
};
