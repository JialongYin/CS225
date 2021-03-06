/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include<tuple>
#include <iostream>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (first[curDim] < second[curDim] || (first[curDim] == second[curDim] && first < second)) return true;
    else return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     double ptlDis = 0;
     double curDis = 0;
     for (int i = 0; i < Dim; ++i){
       ptlDis = ptlDis + (potential[i] - target[i]) * (potential[i] - target[i]);
       curDis = curDis + (currentBest[i] - target[i]) * (currentBest[i] - target[i]);
     }
     if (ptlDis < curDis || (ptlDis == curDis && potential < currentBest)) return true;
     else return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    if (newPoints.empty()) {root = NULL; size = 0;}
    else {root = NULL; root = KDTreeHelper(newPoints, 0, 0, newPoints.size() - 1); size = newPoints.size();}
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::KDTreeHelper(vector<Point<Dim>> newPoints,
                                                   int splitDim, int left, int right)
{
    /**
     * @todo Implement this function!
     */
    if (left >= right) {
      if (root == NULL) {
        root = new KDTreeNode(newPoints[left]);
        return root;
      }else{
        KDTreeNode *subroot = new KDTreeNode(newPoints[left]);
        return subroot;
      }
    }
    Point<Dim> median = KDTreeSelect(newPoints, splitDim, left, right, (left + right)/2);
    if (root == NULL) {
      root = new KDTreeNode(median);
      if ((left + right)/2 != left)
        root->left = KDTreeHelper(newPoints, (splitDim + 1) % Dim, left, (left + right)/2 - 1);
      else root->left = NULL;
      if ((left + right)/2 != right)
        root->right = KDTreeHelper(newPoints, (splitDim + 1) % Dim, (left + right)/2 + 1, right);
      else root->right = NULL;
      return root;
    }
    else {
      KDTreeNode *subroot = new KDTreeNode(median);
      if ((left + right)/2 != left)
        subroot->left = KDTreeHelper(newPoints, (splitDim + 1) % Dim, left, (left + right)/2 - 1);
      else subroot->left = NULL;
      if ((left + right)/2 != right)
        subroot->right = KDTreeHelper(newPoints, (splitDim + 1) % Dim, (left + right)/2 + 1, right);
      else subroot->right = NULL;
      return subroot;
    }
}

template <int Dim>
Point<Dim> KDTree<Dim>::KDTreeSelect(vector<Point<Dim>>& newPoints, int splitDim, int left, int right, int k)
{
    /**
     * @todo Implement this function!
     */
    if (left == right)
      return newPoints[left];
    int pivotIndex = (left + right) / 2;
    pivotIndex = KDTreePartition(newPoints, splitDim, left, right, pivotIndex);
    if (k == pivotIndex)
      return newPoints[k];
    else if (k < pivotIndex)
      return KDTreeSelect(newPoints, splitDim, left, pivotIndex - 1, k);
    else
      return KDTreeSelect(newPoints, splitDim, pivotIndex + 1, right, k);

}

template <int Dim>
int KDTree<Dim>::KDTreePartition(vector<Point<Dim>>& newPoints, int splitDim, int left, int right, int pivotIndex)
{
    /**
     * @todo Implement this function!
     */
    Point<Dim> pivotPoint = newPoints[pivotIndex];
    swap(newPoints[pivotIndex], newPoints[right]);
    int storeIndex = left;
    for (int i = left; i < right; i++){
      if (smallerDimVal(newPoints[i], pivotPoint, splitDim)) {
        swap(newPoints[storeIndex], newPoints[i]);
        storeIndex++;
      }
    }
    swap(newPoints[right], newPoints[storeIndex]);
    return storeIndex;
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
   root = KDTreeCopyHelper(other.root);
   size = other.size;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::KDTreeCopyHelper(KDTreeNode* root) {
  /**
   * @todo Implement this function!
   */
   if (root == NULL) return NULL;
   if (root->left == NULL && root->right == NULL){
     KDTreeNode* copyRoot = new KDTreeNode(root->point);
     return copyRoot;
   }
   KDTreeNode* copyRoot = new KDTreeNode(root->point);
   copyRoot->left = KDTreeCopyHelper(root->left);
   copyRoot->right = KDTreeCopyHelper(root->right);
   return copyRoot;
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
  if (this != &rhs){
    KDTreeDstHelper(this->root);
  }
  root = KDTreeCopyHelper(rhs.root);
  size = rhs.size;
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
  KDTreeDstHelper(this->root);
}

template <int Dim>
void KDTree<Dim>::KDTreeDstHelper(KDTreeNode* root) {
  /**
   * @todo Implement this function!
   */
  if (root == NULL) return;
  if (root->left == NULL && root->right == NULL){
    delete root;
    root = NULL;
    return;
  }
  KDTreeDstHelper(root->left);
  KDTreeDstHelper(root->right);
  delete root;
  root = NULL;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    return findNearestNeighborHelper(query, root, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighborHelper(Point<Dim> query, KDTreeNode* root, int splitDim) const
{
  if (root == NULL) return Point<Dim>();
  if (root->left == NULL && root->right == NULL) {
    // cout << root->point << " ";
    return root->point;
  }
  if (smallerDimVal(query, root->point, splitDim)) {
    if (root->left != NULL){
      Point<Dim> currBest = findNearestNeighborHelper(query, root->left, (splitDim + 1) % Dim);
      if (shouldReplace(query, currBest, root->point)) {
        currBest = root->point;
      }
      double radius = curBestRadius(query, currBest);
      if ((query[splitDim] - root->point[splitDim]) * (query[splitDim] - root->point[splitDim]) <= radius){
        if (root->right != NULL) {
          Point<Dim> potential = findNearestNeighborHelper(query, root->right, (splitDim + 1) % Dim);
          if (shouldReplace(query, currBest, potential)) {
            currBest = potential;
          }
        }
      }
      // cout << currBest << " ";
      return currBest;
    } else {
      // cout << root->point << " ";
      return root->point;
    }
  }
  else {
    if (root->right != NULL){
      Point<Dim> currBest = findNearestNeighborHelper(query, root->right, (splitDim + 1) % Dim);
      if (shouldReplace(query, currBest, root->point)) {
        currBest = root->point;
      }
      double radius = curBestRadius(query, currBest);
      if ((query[splitDim] - root->point[splitDim]) * (query[splitDim] - root->point[splitDim]) <= radius){
        if (root->left != NULL){
          Point<Dim> potential = findNearestNeighborHelper(query, root->left, (splitDim + 1) % Dim);
          if (shouldReplace(query, currBest, potential)) {
            currBest = potential;
          }
        }
      }
      // cout << currBest << " ";
      return currBest;
    } else {
      // cout << root->point << " ";
      return root->point;
    }
  }
}

template <int Dim>
double KDTree<Dim>::curBestRadius(const Point<Dim>& target, const Point<Dim>& currentBest) const
{
  double radius = 0;
  for (int i = 0; i < Dim; ++i){
    radius = radius + (currentBest[i] - target[i]) * (currentBest[i] - target[i]);
  }
  return radius;
}
