


## Score: 16/28 (57.14%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c CYOA.cpp -o .objs/CYOA.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/DirectedEdgeTests.cpp -o .objs/tests/DirectedEdgeTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/GraphTests.cpp -o .objs/tests/GraphTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/ShortestPath.cpp -o .objs/tests/ShortestPath.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/KeyCountingTests.cpp -o .objs/tests/KeyCountingTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/CYOA.o .objs/tests/DirectedEdgeTests.o .objs/tests/GraphTests.o .objs/tests/ShortestPath.o .objs/tests/KeyCountingTests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - Graphs with `DirectedEdge`s have directed edges

- **Points**: 1 / 1





### ✓ - [1/1] - Graphs::isAdjacent with `DirectedEdge`s finds the directed edge

- **Points**: 1 / 1





### ✓ - [1/1] - Graphs::isAdjacent with `DirectedEdge`s does not find the directed edge

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::size returns the vertex count

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::edges::size returns the edge count

- **Points**: 1 / 1





### ✓ - [1/1] - Eight-vertex test graph has correct properties

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (origin-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (dest-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (hybrid test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::isAdjacent is correct (same-order test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::isAdjacent is correct (opposite-order test)

- **Points**: 1 / 1





### ✗ - [0/2] - Graph::shortestPath finds a shortest path with two vertices

- **Points**: 0 / 2


```
Original: path.size() == 2
Expanded: 0 == 2
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with three vertices

- **Points**: 0 / 2


```
Original: path.size() == 3
Expanded: 0 == 3
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with four vertices

- **Points**: 0 / 2


```
Original: path.size() == 4
Expanded: 0 == 4
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with four vertices (reverse)

- **Points**: 0 / 2


```
Original: path.size() == 4
Expanded: 0 == 4
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with five vertices

- **Points**: 0 / 2


```
Original: path.size() == 5
Expanded: 0 == 5
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with six vertices

- **Points**: 0 / 2


```
Original: path.size() == 6
Expanded: 0 == 6
```


### ✓ - [5/5] - Graph::isAdjacent runs in min(deg(v1)\, deg(v2))

- **Points**: 5 / 5





---

This report was generated for **jialong2** using **fac4a6176ad612344d8abe802df3fb52ac6ffea3** (from **December 8th 2018, 12:05:00 am**)
