#include "binary_trees.h"

/**
 * binary_tree_inorder -  function that goes through a binary tree
 * using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

/* Recursively tranverse the left tree */
binary_tree_inorder(tree->left, func);

/* visit the current node */
func(tree->n);

/* Recursively tranverse the right tree */
binary_tree_inorder(tree->right, func);
}
