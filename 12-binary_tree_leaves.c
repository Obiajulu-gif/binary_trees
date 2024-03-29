#include "binary_trees.h"

/**
 * binary_tree_leaves - fucntion that count the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of
 * leaves
 * Return: tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left_leaves, right_leaves;
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

/* Recursively count the leaves in the left and right subtree */
left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);

/* Return the sum of the leaves in the left and right subtree */
return (left_leaves + right_leaves);
}
