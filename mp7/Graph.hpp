#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>
using namespace std;
/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::size() const {
  // TODO: Part 2
  return vertexMap.size();
}


/**
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
  // TODO: Part 2
  return adjList.at(v.key()).size();
}


/**
* Inserts a Vertex into the Graph by adding it to the Vertex map and adjacency list
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
  // TODO: Part 2
  V & v = *(new V(key));
  vertexMap.insert({key, v});
  adjList.insert({key, list<edgeListIter>()});
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  list<edgeListIter> lst = adjList.at(key);
  for (auto it = lst.begin(); it != lst.end(); it++) {
    removeEdge((*(*it)).get().source(), (*(*it)).get().dest());
  }
  vertexMap.erase(key);
  adjList.erase(key);
}


/**
* Inserts an Edge into the adjacency list
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));
  edgeList.push_front(e);
  edgeListIter it = edgeList.begin();
  list<edgeListIter> lst1 = adjList.at(v1.key());
  list<edgeListIter> lst2 = adjList.at(v2.key());
  lst1.push_back(it);
  lst2.push_back(it);
  adjList.at(v1.key()) = lst1;
  adjList.at(v2.key()) = lst2;
  return e;
}


/**
* Removes an Edge from the Graph
* @param key1 The key of the ource Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {
  // TODO: Part 2
  // E & e = *(new E(vertexMap.at(key1), vertexMap.at(key2)));

  list<edgeListIter> lst1 = adjList.at(key1);
  list<edgeListIter> lst2 = adjList.at(key2);
  for (auto it1 = lst1.begin(); it1 != lst1.end(); it1++) {
    if ((*(*it1)).get().source() == vertexMap.at(key2) || (*(*it1)).get().dest() == vertexMap.at(key2))
      lst1.erase(it1);
  }
  // cout << "lst2 size before: " << lst2.size() << endl;
  for (auto it2 = lst2.begin(); it2 != lst2.end(); it2++) {
    if ((*(*it2)).get().source() == vertexMap.at(key1) || (*(*it2)).get().dest() == vertexMap.at(key1))
      lst2.erase(it2);
  }
  // cout << "lst2 size after: " << lst2.size() << endl;
  adjList.at(key1) = lst1;
  adjList.at(key2) = lst2;


  // std::list<std::reference_wrapper<E>> edges;
  // list<edgeListIter> lst = adjList.at(key2);
  // cout << "lst2 size again: " << lst.size() << endl;
  // for (typename list<edgeListIter>::iterator itr = lst.begin(); itr != lst.end(); itr++) {
  //   cout << "edge: " << (*(*itr)).get().source() << " " << (*(*itr)).get().dest()<< endl;
  // }

  // cout << "edgeList size before: " << edgeList.size() << endl;
  for (auto it = edgeList.begin(); it != edgeList.end(); it++) {
    if (( (*it).get().source() == vertexMap.at(key1) && (*it).get().dest() == vertexMap.at(key2) )
        || ((*it).get().source() == vertexMap.at(key2) && (*it).get().dest() == vertexMap.at(key1)) )
      edgeList.erase(it);
  }
  // cout << "edgeList size after: " << edgeList.size() << endl;
}


/**
* Removes an Edge from the adjacency list at the location of the given iterator
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  removeEdge(it->source(), it->dest());
}


/**
* @param key The key of an arbitrary Vertex "v"
* @return The list edges (by reference) that are adjacent to "v"
*/
template <class V, class E>
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  // TODO: Part 2
  std::list<std::reference_wrapper<E>> edges;
  list<edgeListIter> lst = adjList.at(key);
  for (typename list<edgeListIter>::iterator it = lst.begin(); it != lst.end(); ++it) {
    edges.push_back(*(*it));
  }
  return edges;
}


/**
* Return whether the two vertices are adjacent to one another
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
  // TODO: Part 2
  list<std::reference_wrapper<E>> edges = incidentEdges(key1);
  for (typename list<std::reference_wrapper<E>>::iterator it = edges.begin(); it != edges.end(); ++it) {
    if ((*it).get().source() == vertexMap.at(key1) && (*it).get().dest() == vertexMap.at(key2))
      return true;
  }
  return false;
}
