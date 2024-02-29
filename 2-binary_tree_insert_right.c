#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert a nide as the
 * left-child of another node
 * @parent: a pointer to the node to insert the right-child
 * @value: value to store the new node
 * Return: Always 0 (sucess) or NULL on Failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
{
return (NULL);
}

/* Allocate memory for the node */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize new node */
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

/* if parent already has a right child */
if (parent->right != NULL)
{
/* Set new node right child to the old right child */
new_node->right = parent->right;
/* set old left child parent to the new node */
parent->right->parent = new_node;
}

/* set parent right child to the new node */
parent->right = new_node;

return (new_node);
}
