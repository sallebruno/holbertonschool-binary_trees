#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 *
 * This function recursively traverses,
 *		the binary tree upwards from the given node,
 *			counting the number of nodes until it reaches the root node.
 *
 * @node: A pointer to the node to calculate the depth.
 *
 * Return: The depth of the node if it exists, otherwise 0.
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(node->parent));
}
