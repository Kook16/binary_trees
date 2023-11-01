#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: height of the binary tree or 0 if null
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height, height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = 1 + binary_tree_height(tree->left);
else
left_height = 0;

if (tree->right)
right_height = 1 + binary_tree_height(tree->right);
else
right_height = 0;

if (left_height >= right_height)
height += left_height;
else
height += right_height;

return (height);
}
