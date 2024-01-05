#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the balance factor
 */

size_t helper(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = helper(tree->left);
	right_height = helper(tree->right);

	return (left_height - right_height);
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
