#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 *  as the left-child of another node
 * @parent: a pointer to the node to insert the left-child
 * @value: the value to store the new node
 * Return: Alway 0 (success) or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
{
return (NULL);
}

/* Allocate memory for new node */
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

/* if parent already has a left child */
if (parent->left != NULL)
{
/* set new node left child to the old left child */
new_node->left = parent->left;
/* set old left child parent to the new node */
parent->left->parent = new_node;
}

/* set parent left child to the new node */
parent->left = new_node;

return (new_node);
}
