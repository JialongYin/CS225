#include "Graph.h"
#include "Vertex.h"
#include "Edge.h"
#include "DirectedEdge.h"

#include "CYOA.h"

#include <string>
#include <iostream>

int main() {
  CYOA cyoa;
  Graph<Vertex, DirectedEdge> g = cyoa.load("data/");
  std::cout << g << std::endl;

  // Modify the g.shortestPath call to find the shortest path to your story:

  std::list<std::string> path = g.shortestPath("jialong2_Einstein", "jialong2_Einstein-oak_1");
  for (std::string key : path) {
    std::cout << key << " -> ";
  }
  std::cout << "[THE END]" << std::endl;
  std::cout << "path.size()" << path.size() << std::endl;


  return 0;
}
