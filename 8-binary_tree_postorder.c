#include "binary_trees.h"

/**
 * inary_tree_postorder - function that goes through binary tree by post-order traversal
 * 
 * 
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
     if (!tree || !func)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}