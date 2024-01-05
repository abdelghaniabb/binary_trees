#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0
 */
size_t helper(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper(tree) - 1);
}

/**
 * helper - measure the height
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0
 */
size_t helper(const binary_tree_t *tree)
{
	size_t n1, n2;

	if (tree == NULL)
		return (0);

	n1 = 1 + helper(tree->right);
	n2 = 1 + helper(tree->left);

	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

