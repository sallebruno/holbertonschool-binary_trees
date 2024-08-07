#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer the root
 *
 * Return: 0 or nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		i = 1;

	i = i + binary_tree_nodes(tree->left);
	i = i + binary_tree_nodes(tree->right);

	return (i);
}
