#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (l > r ? l : r);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, otherwise 0 if tree is null
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (!tree)
        return (0);

    left_height = (int)binary_tree_height(tree->left);
    right_height = (int)binary_tree_height(tree->right);

    return (left_height - right_height);
}