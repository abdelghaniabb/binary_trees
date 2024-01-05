#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the node
 */
size_t helper(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper(tree) - 1);
}
/**
 * helper - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the node
 */

size_t helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + helper(tree->parent));
}

