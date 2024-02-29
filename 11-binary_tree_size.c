#include "binary_trees.h"

/**
 * binary_tree_size - function that measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size;
if (tree == NULL)
{
return (0);
}
/* Recursively calculate the size of the left and right subtree */
left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);
/* Return the total size of the tree  */
return (left_size + right_size + 1);
}
