#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 *  using pre-order traversal
 * @tree:  a pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 * Return: Always tree or func is NULL otherwise do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

/* visit current node */
func(tree->n);

/* Recursively traverse left subtree */
binary_tree_preorder(tree->left, func);

/* Recursively tranverse right subtree */
binary_tree_preorder(tree->right, func);
}
