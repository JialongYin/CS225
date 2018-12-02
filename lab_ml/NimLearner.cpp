/**
 * @file NimLearner.cpp
 * CS 225: Data Structures
 */

#include "NimLearner.h"
#include <ctime>
#include <iostream>
using namespace std;

/**
 * Constructor to create a game of Nim with `startingTokens` starting tokens.
 *
 * This function creates a graph, `g_` representing all of the states of a
 * game of Nim with vertex labels "p#-X", where:
 * - # is the current player's turn; p1 for Player 1, p2 for Player2
 * - X is the tokens remaining at the start of a player's turn
 *
 * For example:
 *   "p1-4" is Player 1's turn with four (4) tokens remaining
 *   "p2-8" is Player 2's turn with eight (8) tokens remaining
 *
 * All legal moves between states are created as edges with initial weights
 * of 0.
 *
 * @param startingTokens The number of starting tokens in the game of Nim.
 */
NimLearner::NimLearner(unsigned startingTokens) : g_(true, true) {
    /* Your code goes here! */
    startingVertex_ = "p1-" + to_string(startingTokens);

    for (unsigned i = 0; i <= startingTokens; i++) {
      Vertex cur_1 = "p1-" + to_string(i);
      Vertex cur_2 = "p2-" + to_string(i);
      g_.insertVertex(cur_1);
      g_.insertVertex(cur_2);
    }

    for (int i = startingTokens; i >= 2; i--) {
      Vertex cur = "p1-" + to_string(i);
      Vertex next = "p2-" + to_string(i-1);
      Vertex next_next = "p2-" + to_string(i-2);
      g_.insertEdge(cur, next);
      g_.insertEdge(cur, next_next);
      g_.setEdgeWeight(cur, next, 0);
      g_.setEdgeWeight(cur, next_next, 0);
    }
    Vertex cur = "p1-" + to_string(1);
    Vertex next = "p2-" + to_string(0);
    g_.insertEdge(cur, next);
    g_.setEdgeWeight(cur, next, 0);

    for (int i = startingTokens; i >= 2; i--) {
      Vertex cur = "p2-" + to_string(i);
      Vertex next = "p1-" + to_string(i-1);
      Vertex next_next = "p1-" + to_string(i-2);
      g_.insertEdge(cur, next);
      g_.insertEdge(cur, next_next);
      g_.setEdgeWeight(cur, next, 0);
      g_.setEdgeWeight(cur, next_next, 0);
    }
    cur = "p2-" + to_string(1);
    next = "p1-" + to_string(0);
    g_.insertEdge(cur, next);
    g_.setEdgeWeight(cur, next, 0);
}

/**
 * Plays a random game of Nim, returning the path through the state graph
 * as a vector of `Edge` classes.  The `origin` of the first `Edge` must be
 * the vertex with the label "p1-#", where # is the number of starting
 * tokens.  (For example, in a 10 token game, result[0].origin must be the
 * vertex "p1-10".)
 *
 * @returns A random path through the state space graph.
 */
std::vector<Edge> NimLearner::playRandomGame() const {
  vector<Edge> path;
 /* Your code goes here! */
  vector<Vertex> start_adj = g_.getAdjacent(startingVertex_);
  Edge start_edge = g_.getEdge(startingVertex_, start_adj[rand() % start_adj.size()]);
  path.push_back(start_edge);
  // cout << "start_edge.source " << start_edge.source << endl;
  // cout << "start_edge.dest " << start_edge.dest << endl;
  // cout << start_edge.source << "->";
  // cout << start_edge.dest << "->";
  while (path.back().dest != "p2-0" && path.back().dest != "p1-0") {
    vector<Vertex> vertex_adj = g_.getAdjacent(path.back().dest);
    Edge vertex_edge = g_.getEdge(path.back().dest, vertex_adj[rand() % vertex_adj.size()]);
    // cout << vertex_edge.dest << "->";
    path.push_back(vertex_edge);
  }
  // cout << endl;
  return path;
}

/*
 * Updates the edge weights on the graph based on a path through the state
 * tree.
 *
 * If the `path` has Player 1 winning (eg: the last vertex in the path goes
 * to Player 2 with no tokens remaining, or "p2-0", meaning that Player 1
 * took the last token), then all choices made by Player 1 (edges where
 * Player 1 is the source vertex) are rewarded by increasing the edge weight
 * by 1 and all choices made by Player 2 are punished by changing the edge
 * weight by -1.
 *
 * Likewise, if the `path` has Player 2 winning, Player 2 choices are
 * rewarded and Player 1 choices are punished.
 *
 * @param path A path through the a game of Nim to learn.
 */
void NimLearner::updateEdgeWeights(const std::vector<Edge> & path) {
 /* Your code goes here! */
 if (path.back().dest == "p2-0") {
   for (unsigned i = 0; i < path.size(); i++) {
     int weight = g_.getEdgeWeight(path[i].source, path[i].dest);
     if (path.size() == 1)
      cout << "weight" << weight << endl;
     if (i % 2 == 0) {
       g_.setEdgeWeight(path[i].source, path[i].dest, weight+1);
     } else {
       g_.setEdgeWeight(path[i].source, path[i].dest, weight-1);
     }
   }
 } else {
   for (unsigned i = 0; i < path.size(); i++) {
     int weight = g_.getEdgeWeight(path[i].source, path[i].dest);
     if (i % 2 == 0) {
       g_.setEdgeWeight(path[i].source, path[i].dest, weight-1);
     } else {
       g_.setEdgeWeight(path[i].source, path[i].dest, weight+1);
     }
   }
 }
}

/**
 * Label the edges as "WIN" or "LOSE" based on a threshold.
 */
void NimLearner::labelEdgesFromThreshold(int threshold) {
  for (const Vertex & v : g_.getVertices()) {
    for (const Vertex & w : g_.getAdjacent(v)) {
      int weight = g_.getEdgeWeight(v, w);

      // Label all edges with positve weights as "WINPATH"
      if (weight > threshold)           { g_.setEdgeLabel(v, w, "WIN"); }
      else if (weight < -1 * threshold) { g_.setEdgeLabel(v, w, "LOSE"); }
    }
  }
}

/**
 * Returns a constant reference to the state space graph.
 *
 * @returns A constant reference to the state space graph.
 */
const Graph & NimLearner::getGraph() const {
  return g_;
}
