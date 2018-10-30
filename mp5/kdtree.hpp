/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

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
    // if (newPoints.empty()) {root = NULL; size = 0;}
    // KDTreeHelper(newPoints, 0, 0, newPoints.size() - 1);
}

// template <int Dim>
// KDTreeNode* KDTree<Dim>::KDTreeHelper(vector<Point<Dim>> newPoints, int splitDim, int left, int right)
// {
//     /**
//      * @todo Implement this function!
//      */
//     if (left == right) {
//       if (root == NULL) {
//         root = new KDTreeNode(newPoints[left]);
//         return root;
//       }else{
//         KDTreeNode *subroot = new KDTreeNode(newPoints[left]);
//         return subroot;
//       }
//     }
//     Point<Dim> median = KDTreeSelect(newPoints, splitDim, left, right, (right - left + 1)/2);
//     if (root == NULL) {
//       root = new KDTreeNode(median);
//       root->left = KDTreeHelper(newPoints, (splitDim + 1) % Dim, left, (left + right)/2 - 1);
//       root->right = KDTreeHelper(newPoints, (splitDim + 1) % Dim, (left + right)/2 + 1, right);
//       return root;
//     }
//     else {
//       KDTreeNode *subroot = new KDTreeNode(median);
//       subroot->left = KDTreeHelper(newPoints, (splitDim + 1) % Dim, left, (left + right)/2 - 1);
//       subroot->right = KDTreeHelper(newPoints, (splitDim + 1) % Dim, (left + right)/2 + 1, right);
//       return subroot;
//     }
// }

// template <int Dim>
// Point<Dim> KDTree<Dim>::KDTreeSelect(vector<Point<Dim>>& newPoints, int splitDim, int left, int right, int k)
// {
//     /**
//      * @todo Implement this function!
//      */
//     if (left == right)
//       return newPoints[left];
//     int pivotIndex = (left + right) / 2;
//     pivotIndex = KDTreePartition(newPoints, splitDim, left, right, pivotIndex);
//     if (k == pivotIndex)
//       return newPoints[k];
//     else if (k < pivotIndex)
//       return KDTreeSelect(newPoints, splitDim, left, pivotIndex - 1, k);
//     else
//       return KDTreeSelect(newPoints, splitDim, pivotIndex + 1, right, k);
//
// }
//
// template <int Dim>
// int KDTree<Dim>::KDTreePartition(vector<Point<Dim>>& newPoints, int splitDim, int left, int right, int pivotIndex)
// {
//     /**
//      * @todo Implement this function!
//      */
//     double pivotValue = newPoints[pivotIndex][splitDim];
//     Point<Dim> pivotPoint = newPoints[pivotIndex];
//     swap(newPoints[pivotIndex], newPoints[right]);
//     int storeIndex = left;
//     for (int i = left; i < right; i++){
//       if (newPoints[i][splitDim] < pivotValue || (newPoints[i][splitDim] == pivotValue && newPoints[i] < pivotPoint)) {
//         swap(newPoints[storeIndex], newPoints[i]);
//         storeIndex++;
//       }
//     }
//     swap(newPoints[right], newPoints[storeIndex]);
//     return storeIndex;
// }

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}
