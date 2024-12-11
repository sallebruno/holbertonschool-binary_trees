#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - node as the right-child of another node.
 * @parent: Pointer to the node to insert the right-child.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to new node, if there's no error.
 *		Otherwise - NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rght;

	if (parent == NULL)
		return (NULL);

	rght = binary_tree_node(parent, value);
	if (rght == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		rght->right = parent->right;
		parent->right->parent = rght;
	}
	parent->right = rght;

	return (rght);
}
