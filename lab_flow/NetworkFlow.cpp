/**
 * @file NetworkFlow.cpp
 * CS 225: Data Structures
 */

#include <vector>
#include <algorithm>
#include <set>

#include "graph.h"
#include "edge.h"

#include "NetworkFlow.h"

using namespace std;

int min(int a, int b) {
  if (a<b)
    return a;
  else return b;
}

NetworkFlow::NetworkFlow(Graph & startingGraph, Vertex source, Vertex sink) :
  g_(startingGraph), residual_(Graph(true,true)), flow_(Graph(true,true)), source_(source), sink_(sink) {

  // YOUR CODE HERE
  vector<Vertex> vertices = startingGraph.getVertices();
  vector<Edge> edges = startingGraph.getEdges();
  for (size_t i = 0; i < vertices.size(); i++ ) {
    residual_.insertVertex(vertices[i]);
    flow_.insertVertex(vertices[i]);
  }
  for (size_t i = 0; i < edges.size(); i++ ) {
    residual_.insertEdge(edges[i].source, edges[i].dest);
    residual_.setEdgeWeight(edges[i].source, edges[i].dest, edges[i].getWeight());
    residual_.insertEdge(edges[i].dest, edges[i].source);
    residual_.setEdgeWeight(edges[i].dest, edges[i].source, 0);
    flow_.insertEdge(edges[i].source, edges[i].dest);
    flow_.setEdgeWeight(edges[i].source, edges[i].dest, 0);
  }
  maxFlow_ = 0;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the helper function.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   * @@params: visited -- A set of vertices we have visited
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink,
  std::vector<Vertex> &path, std::set<Vertex> &visited) {

  if (visited.count(source) != 0)
    return false;
  visited.insert(source);

  if (source == sink) {
    return true;
  }

  vector<Vertex> adjs = residual_.getAdjacent(source);
  for(auto it = adjs.begin(); it != adjs.end(); it++) {
    if (visited.count(*it) == 0 && residual_.getEdgeWeight(source,*it) > 0) {
      path.push_back(*it);
      if (findAugmentingPath(*it,sink,path,visited))
        return true;
      else {
        path.pop_back();
      }
    }
  }

  return false;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the main function.  It initializes a set to keep track of visited vertices.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, std::vector<Vertex> &path) {
   std::set<Vertex> visited;
   path.clear();
   path.push_back(source);
   return findAugmentingPath(source,sink,path,visited);
}

  /**
   * pathCapacity - Determine the capacity of a path in the residual graph.
   *
   * @@params: path   -- The vertices in the path
   */

int NetworkFlow::pathCapacity(const std::vector<Vertex> & path) const {
  // YOUR CODE HERE
  int capacity = residual_.getEdgeWeight(path[0], path[1]);
  for (size_t i = 0; i < path.size()-1; i++) {
    int weight = residual_.getEdgeWeight(path[i], path[i+1]);
    if (weight < capacity) {
      capacity = weight;
    }
  }
  return capacity;
}

  /**
   * calculuateFlow - Determine the capacity of a path in the residual graph.
   * Sets the member function `maxFlow_` to be the flow, and updates the
   * residual graph and flow graph according to the algorithm.
   *
   * @@outputs: The network flow graph.
   */

const Graph & NetworkFlow::calculateFlow() {
  // YOUR CODE HERE
  vector<Vertex> path;
  while (findAugmentingPath(source_, sink_, path)) {
    // std::cout << "Good here" << std::endl;
    int capacity = pathCapacity(path);
    maxFlow_ = maxFlow_ + capacity;
    for (size_t i = 0; i < path.size()-1; i++) {
      if (flow_.edgeExists(path[i], path[i+1])) {
        int weight = flow_.getEdgeWeight(path[i], path[i+1]);
        flow_.setEdgeWeight(path[i], path[i+1], weight + capacity);
      } else {
        int weight = flow_.getEdgeWeight(path[i+1], path[i]);
        flow_.setEdgeWeight(path[i+1], path[i], weight - capacity);
      }
      int weight_r_f = residual_.getEdgeWeight(path[i], path[i+1]);
      residual_.setEdgeWeight(path[i], path[i+1], weight_r_f - capacity);
      int weight_r_r = residual_.getEdgeWeight(path[i+1], path[i]);
      residual_.setEdgeWeight(path[i+1], path[i], weight_r_r + capacity);
    }
  }
  return flow_;
}

int NetworkFlow::getMaxFlow() const {
  return maxFlow_;
}

const Graph & NetworkFlow::getGraph() const {
  return g_;
}

const Graph & NetworkFlow::getFlowGraph() const {
  return flow_;
}

const Graph & NetworkFlow::getResidualGraph() const {
  return residual_;
}
