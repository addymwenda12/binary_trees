#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value for the new node */
	new_node->n = value;

	/* Set the parent of the new node */
	new_node->parent = parent;

	/* Initialize the left and right children as NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
