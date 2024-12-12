#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry of the program
 * @node: Pointer to the node
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL ? 1 : 0);
}
