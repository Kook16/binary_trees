#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: A pointer to created node or null if fail
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (!parent)
return (NULL);

node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);

node->n = value;
node->parent = parent;
node->right = NULL;
node->left = NULL;

if (parent->left)
{
node->left = parent->left;
parent->left->parent = node;
}
parent->left = node;

return (node);
}
