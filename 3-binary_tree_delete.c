#include "binary_trees.h"

/**
 * binary_tree_delete - function that delete an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return - Null to do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
/* Recursively delete left and right subtree */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* delete the current node */
free(tree);
}
