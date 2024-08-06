#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root
 * @node: pointer node
 *
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent != NULL)
		return (0);
	return (1);
}
