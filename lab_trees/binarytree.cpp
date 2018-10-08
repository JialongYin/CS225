/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>

#include <algorithm>
using namespace std;

/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    cout << endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
template <typename T>
void BinaryTree<T>::mirror()
{
    //your code here
    mirror(root);
}

template <typename T>
void BinaryTree<T>::mirror(Node* subRoot)
{
    // Base case
    if (subRoot == NULL)
        return;

    // Recursive definition
    swap(subRoot->left, subRoot->right);
    mirror(subRoot->left);
    mirror(subRoot->right);
}


/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    // your code here
    return isOrderedIterative(root);
}

template <typename T>
bool BinaryTree<T>::isOrderedIterative(typename BinaryTree<T>::Node* root) const
{
    // your code here
    InorderTraversal<int> iot(root);
    int temp;
    for (TreeTraversal<int>::Iterator it = iot.begin(); it != iot.end(); it = it) {
        // cout << (*it)->elem << " ";
        temp = (*it)->elem;
        if (++it != iot.end()){
          if (temp > (*it)->elem)
            return false;
        }
    }
    return true;
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    // your code here
    // cout << root->elem << " ";
    return isOrderedRecursive(root);;
    // return true;
}

template <typename T>
bool BinaryTree<T>::isOrderedRecursive(const Node* subRoot) const
{
    // your code here
    // if (subRoot == NULL) return true;
    // cout << subRoot->elem << " ";
    if (subRoot->left == NULL) // && subRoot->right == NULL
      return true;
    if (isOrderedRecursive(subRoot->left)){
      // cout << subRoot->elem << " ";
      if (subRoot->elem < myHelperLeft(subRoot->left)->elem)
        return false;
    } else return false;
    if (subRoot->right == NULL)
      return true;
    if (isOrderedRecursive(subRoot->right)){
      // cout << subRoot->elem << " ";
      if (subRoot->elem < myHelperRight(subRoot->right)->elem)
        return true;
    }
    return false;
}

template <typename T>
typename BinaryTree<T>::Node * BinaryTree<T>::myHelperLeft(Node * node) const
{
  if ((node->right) == NULL)
    return node;
  return myHelperLeft(node->right);
}

template <typename T>
typename BinaryTree<T>::Node * BinaryTree<T>::myHelperRight(Node * node) const
{
  if ((node->left) == NULL)
    return node;
  return myHelperLeft(node->left);
}
/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
 */
template <typename T>
void BinaryTree<T>::getPaths(vector<vector<T> > &paths) const
{
    // your code here
    vector<T> path;
    getPathsHelper(paths, root, path);
}

template <typename T>
void BinaryTree<T>::getPathsHelper(vector<vector<T> > &paths, Node* root, vector<T> path) const
{
    // your code here
    if (root == NULL) {
      paths.push_back(path);
      return;
    }
    if (path.empty()) path.push_back(root->elem);
    vector<T> pathleft = path;
    if (root->left != NULL){
      pathleft.push_back(root->left->elem);
      getPathsHelper(paths, root->left, pathleft);
    }
    vector<T> pathright = path;
    if (root->right != NULL){
      pathright.push_back(root->right->elem);
      getPathsHelper(paths, root->right, pathright);
    }
    if (root->left == NULL && root->right == NULL){
      paths.push_back(path);
      return;
    }
}


/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
    return -1;
}
