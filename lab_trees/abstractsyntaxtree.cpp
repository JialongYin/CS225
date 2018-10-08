#include "abstractsyntaxtree.h"

/**
 * Calculates the value from an AST (Abstract Syntax Tree). To parse numbers from strings, please use std::stod
 * @return A double representing the calculated value from the expression transformed into an AST
 */
double AbstractSyntaxTree::eval() const {
    // @TODO Your code goes here...

    return evalHelper(getRoot());;
}

double AbstractSyntaxTree::evalHelper(typename BinaryTree<std::string>::Node* node) const {
    // @TODO Your code goes here...
    if (node == NULL) return 0;
    if (node->left == NULL) return std::stod(node->elem);
    double x = evalHelper(node->left);
    // if (node->right == NULL) return std::stod(node->elem);
    double y = evalHelper(node->right);
    string c = node->elem;
    if (c =="+") return x + y;
    else if (c =="-") return x - y;
    else if (c =="*") return x * y;
    else return x / y;
}
