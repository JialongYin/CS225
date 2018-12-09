#include <queue>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
/**
 * Returns an std::list of vertex keys that creates some shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  list<pair<string, list<string>>> queue;
  queue.push_back(make_pair(start, list<string>()));
  list<string> visited;
  // std::cout << "start " << start << std::endl;
  // std::cout << "vertex " << queue.front().first << std::endl;
  while (!queue.empty()) {
    string vertex = queue.front().first;
    list<string> path = queue.front().second;
    queue.pop_front();

    // std::cout << "vertex " << vertex << std::endl;
    // std::cout << "path: ";
    // for (auto it = path.begin(); it != path.end(); it++) {
    //   std::cout << "vertex_p " << *it << " -> ";
    // }
    // std::cout << std::endl;

    if (find(visited.begin(), visited.end(), vertex) == visited.end()) {

      if (vertex == end) {
        path.push_back(end);
        // std::cout << "path.size()" << path.size() << std::endl;
        // for (auto it = path.begin(); it != path.end(); it++) {
        //   std::cout << "vertex " << *it << std::endl;
        // }
        return path;
      }
      list<reference_wrapper<E>> edges = incidentEdges(vertex);
      for (auto it = edges.begin(); it != edges.end(); ++it) {
        if ((*it).get().source() == vertexMap.at(vertex)) {
          list<string> temp = path;
          temp.push_back(vertex);
          queue.push_back(make_pair((*it).get().dest().key(), temp));
        } else {
          list<string> temp = path;
          temp.push_back(vertex);
          queue.push_back(make_pair((*it).get().source().key(), temp));
        }
      }
      visited.push_back(vertex);
    }
  }
  return list<string>();
}
