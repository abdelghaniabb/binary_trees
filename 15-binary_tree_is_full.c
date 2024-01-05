#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * @n: parameter
 * Return: 1 or 0
 */

int helper(const binary_tree_t *tree, int n);
int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 1;

	if (tree == NULL)
		return (0);

	return (helper(tree, n));
}

/**
 * helper - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * @n: parameter
 * Return: 1 or 0
 */
int helper(const binary_tree_t *tree, int n)
{
	if (tree == NULL)
		return (n);

	n = helper(tree->right, n);
	n = helper(tree->left, n);

	if (tree->right == NULL && tree->left != NULL)
		n = 0;
	if (tree->right != NULL && tree->left == NULL)
		n = 0;

	return (n);
}

