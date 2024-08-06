#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert right node in the parents
 * @parent: The parent node
 * @value: The value of the new node
 *
 * Return: The new node
 *         If parent is NULL or occurs an error - NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;
	return (new);
}
