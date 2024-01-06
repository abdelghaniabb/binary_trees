#include <stdlib.h>
#include "binary_trees.h"

/**
 * height - measure the height
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0
 */
size_t height(const binary_tree_t *tree)
{
	size_t n1, n2;

	if (tree == NULL)
		return (0);

	n1 = 1 + height(tree->right);
	n2 = 1 + height(tree->left);

	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

/**
 * is_perfect - checks if the tree is perfect
 * @tree: pointer to the root of the tree
 * @d: the height of the tree
 * @level: level
 * Return: 1 or 0
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		if (d == level + 1)
			return (1);
		else
			return (0);
	}
	if (tree->right == NULL || tree->left == NULL)
		return (0);

	if (is_perfect(tree->right, d, level + 1) &&
		is_perfect(tree->left, d, level + 1))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node  of the tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = height(tree);

	return (is_perfect(tree, d, 0));
}

