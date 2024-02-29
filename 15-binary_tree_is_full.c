#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/* If tree is NULL, it is full */
if (tree == NULL)
return (0);

/* If the current node has 0 children, it is full */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* If the current node has 2 children, check its subtrees */
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

/* If the current node has only one child, it is not full */
return (0);
}
