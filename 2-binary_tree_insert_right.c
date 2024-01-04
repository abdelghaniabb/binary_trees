#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child
 * @parent: pointer to the node to insert the right child
 * @value: the value to store in the new node
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = new;
	new->left = NULL;
	new->parent = parent;
	parent->right = new;

	return (new);
}

