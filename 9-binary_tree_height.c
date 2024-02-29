#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of
 * a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
/* if tree is NULL,return 0 */
if (tree == NULL)
{
return (0);
}
/* Recursively calculate the height of the left subtree */
left_height = binary_tree_height(tree->left);

/* Recursively calculate the height of the right subtree */
right_height = binary_tree_height(tree->right);

/* Return the maximum height between left and right subtree, plus 1 */
return (1 + (left_height > right_height ? left_height : right_height));
}
