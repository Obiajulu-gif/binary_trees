#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if no common
 *         ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *temp1, *temp2;

/* Edge cases */
if (first == NULL || second == NULL)
return (NULL);

/* Initialize two pointers */
temp1 = first;
temp2 = second;

/* Traverse upwards from first node */
while (temp1 != NULL)
{
/* Check if second node is found */
if (temp1 == second || temp1->parent == second)
return ((binary_tree_t *)temp1);

/* Reset second pointer for each iteration of first node */
temp2 = second;

/* Traverse upwards from second node */
while (temp2 != NULL)
{
/* Check if first node is found */
if (temp2 == first || temp2->parent == first)
return ((binary_tree_t *)temp2);

/* Move second node pointer upwards */
temp2 = temp2->parent;
}

/* Move first node pointer upwards */
temp1 = temp1->parent;
}

/* If no common ancestor found */
return (NULL);
}
