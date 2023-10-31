#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: A pointer to created node or null if fail
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t * node;

    if (!parent)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (!node)
        return (NULL);

    node->n = value;
    node->parent = parent;
    node->left = NULL;

    if (parent->right)
    {
        node->right = parent->right;
        parent->right->parent = node; /*updat the parent of the left child*/
    }
    parent->right = node;

    return (node);
}