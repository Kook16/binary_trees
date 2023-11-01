#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleasr 1 child
 * @tree: A pointer to the root node of the tre to count nodes
 * Return: Number of nodes, otherwise 0 if tree is NULL
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t right_count, left_count;

if (!tree)
return (0);

left_count = binary_tree_nodes(tree->left);
right_count = binary_tree_nodes(tree->right);

if (tree->left || tree->right)
return (1 + left_count + right_count);

return (left_count + right_count);
}
