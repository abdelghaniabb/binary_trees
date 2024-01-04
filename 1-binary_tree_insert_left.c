#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the node created or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = new_node;
	new_node->right = NULL;
	parent->left = new_node;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}

