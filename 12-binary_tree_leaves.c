#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - countd the leaves in abinary tree
 * @tree: pointer to the root nodeof the tree
 * @n: counter
 * Return: nomber of leaves
 */
size_t count_leaves(const binary_tree_t *tree, size_t n);
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	return (count_leaves(tree, n));
}

/**
 * count_leaves - countd the leaves in abinary tree
 * @tree: pointer to the root nodeof the tree
 * @n: counter
 * Return: nomber of leaves
 */
size_t count_leaves(const binary_tree_t *tree, size_t n)
{
	if (tree == NULL)
		return (n);

	n = count_leaves(tree->right, n);
	n = count_leaves(tree->left, n);

	if (tree->right == NULL && tree->left == NULL)
		n++;

	return (n);
}
