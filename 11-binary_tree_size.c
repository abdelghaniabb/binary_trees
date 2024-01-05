#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size of the tree
 */
size_t helper(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper(tree) / 2);
}
/**
 * helper -measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size of the tree
 */
size_t helper(const binary_tree_t *tree)
{
	size_t n1, n2;

	if (tree == NULL)
		return (0);

	n1 = 1 + helper(tree->right);
	n2 = 1 + helper(tree->left);
	return (n1 + n2);
}

