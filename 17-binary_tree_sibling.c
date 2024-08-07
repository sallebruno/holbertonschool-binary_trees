#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * @node: A pointer to the node to find the sibling of.
 *
 * Description: If the node is NULL or has no parent, returns NULL.
 *              If the node has no sibling, returns NULL.
 *              Otherwise, returns a pointer to the sibling node.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
