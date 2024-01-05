#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - countd the leaves in abinary tree
 * @tree: pointer to the root nodeof the tree
 * Return: nomber of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n;

	if (tree == NULL)
		return (0);

	n = 1 + binary_tree_leaves(tree->right);
	n = 1 + binary_tree_leaves(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (n);
}
