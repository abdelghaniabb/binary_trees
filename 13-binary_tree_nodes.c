#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * @n: counter
 * Return: number of nodes
 */

size_t count_nodes(const binary_tree_t *tree, size_t n);
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	return (count_nodes(tree, n));
}

/**
 * count_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * @n: counter
 * Return: number of nodes
 */

size_t count_nodes(const binary_tree_t *tree, size_t n)
{
	if (tree == NULL)
		return (n);

	n = count_nodes(tree->right, n);
	n = count_nodes(tree->left, n);

	if (tree->right != NULL || tree->left != NULL)
		n++;

	return (n);
}

