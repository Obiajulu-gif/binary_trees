#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Return: node is NULL or the parent is NULL, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
/* if node is the left child, return the right child (if exist) */
if (node->parent->left == node)
{
return (node->parent->right);
}

/* if node is the right child, return the left child (if exist) */
if (node->parent->right == node)
{
return (node->parent->left);
}

/* if node is neither left nor right child, return NULL */
return (NULL);
}
