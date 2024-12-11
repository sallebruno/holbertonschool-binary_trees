#include "binary_tree.h" 
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as the left-child.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to new node, if there's no error.
 *		Otherwise - NULL 
 */
 
 binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
 {
	binary_tree_t *lft;

	if [parent == NULL]
		return (NULL);
		
	lft = binary_tree_node(parent, value);
	if (lft == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		lft->left = parent->left;
		parent->left->parent = lft;
	}
	parent->left = lft;

	return (lft);
 }